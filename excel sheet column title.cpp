class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        char tmp;
        while(n!=0){
            n--;
            tmp='A'+n%26;
            ans+=tmp;
            n/=26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
