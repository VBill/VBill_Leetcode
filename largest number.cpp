bool cmp(const string &a, const string &b){
        string x=b+a;
        string y=a+b;
        return x<y;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int ii;
        for(ii=0; ii<(int)nums.size(); ii++){
            if(nums[ii]!=0)break;
        }
        if(ii==(int)nums.size())return "0";
        vector<string> all;
        for(int i=0; i<(int)nums.size(); i++){
            ostringstream ss;
            ss<<nums[i];
            all.push_back(ss.str());
        }
        sort(all.begin(), all.end(), cmp);

        string ans;
        for(int i=0; i<(int)all.size(); i++){
            ans+=all[i];
        }
        return ans;
    }
};
