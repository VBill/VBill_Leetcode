class Solution {
public:
    int rob(vector<int> &num) {
        unsigned int asize=num.size();
        int *cost=new int[asize], ans=0;
        memset(cost, 0, asize*sizeof(int));
        for(int i=0; i<(int)asize; i++){
            int max_num=0;
            for(int j=0; j<i-1; j++){
                if(max_num<cost[j]){
                    max_num=cost[j];
                }
            }
            cost[i]=max_num+num[i];
            ans=max(ans, cost[i]);
        }
        delete []cost;
        return ans;
    }
};
