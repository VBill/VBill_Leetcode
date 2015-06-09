class Solution {
public:
    int titleToNumber(string s) {
        int ans=0, size=s.size(), t;
        char c;
        for(int i=1; i<=size; i++){
            c=s.at(size-i);
            t=c-'A'+1;
            ans+=t*pow(26, i-1);
        }
        return ans;
    }
};
