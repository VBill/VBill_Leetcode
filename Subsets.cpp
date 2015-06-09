class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
            int size=S.size();
            vector<vector<int> > ret;
            vector<int> tmp;
            int mask=1;
            for(int i=0; i<size; i++){
                mask=mask | (1<<i);
            }
            for(int i=mask; i>=0; i--){
                tmp.clear();
                for(int j=size-1; j>=0; j--){
                    if( 1 & (i>>j) )
                        tmp.push_back( S[j] );
                }
                sort(tmp.begin(), tmp.end());
                ret.push_back(tmp);
            }
            return ret;
    }
};
