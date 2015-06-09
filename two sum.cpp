class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ans;
        vector<pair<int, int> > lists[1023];
        int id;
        //1023
        for(int i=0; i<(int)numbers.size(); i++){
            id=abs(numbers[i]);
            lists[id%1023].push_back(make_pair(numbers[i], i));
        }
        for(int i=0; i<(int)numbers.size(); i++){
            int remain=target-numbers[i];
            id=abs(remain);
            for(int j=0; j<(int)lists[id%1023].size(); j++){
                if(remain-lists[id%1023][j].first==0){
                    if(i==lists[id%1023][j].second)continue;
                    ans.push_back( 1 + min(i, lists[id%1023][j].second) );
                    ans.push_back( 1 + max(i, lists[id%1023][j].second) );
                    return ans;
                }
            }
        }
        return ans;
    }
};
