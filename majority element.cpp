class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int, int> ele_time;
        for(int i=0; i<(int)num.size(); i++){
            if(ele_time.count(num[i])==0){
                ele_time[num[i]]=1;
            }else{
                ele_time[num[i]]++;
            }
        }

        int max=-1, ans=0;
        map<int, int>::iterator pt;
        for(pt=ele_time.begin(); pt!=ele_time.end(); ++pt){
            if(pt->second>max){
                max=pt->second;
                ans=pt->first;
            }
        }
        return ans;
    }
};
