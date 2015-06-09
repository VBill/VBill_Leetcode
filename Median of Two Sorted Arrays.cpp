class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        vector<int> all;
        int i=0, j=0;
        while(i<m && j<n){
            if(A[i]<B[j]){
                all.push_back(A[i++]);
            }else{
                all.push_back(B[j++]);
            }
        }
        while(i<m){
            all.push_back(A[i++]);
        }
        while(j<n){
            all.push_back(B[j++]);
        }
        if(all.size()%2!=0){
            return all[all.size()/2];
        }else{
            return ( (double)all[all.size()/2] + (double)all[all.size()/2-1] ) / 2.0;
        }
    }
};
