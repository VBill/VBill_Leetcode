class Solution {
public:
    string longestPalindrome(string s) {
        int size=s.size();
        if(size==0 || size==1)return s;

        bool ok[1005][1005]={false};
        int len, st;

        for(int i=0; i<size; i++)
            ok[i][i]=true;
        for (int i = 0; i < size-1; i++) {
            if (s[i] == s[i+1]) {
                ok[i][i+1] = true;
                st=i;
                len = 2;
            }
        }

        for (int l = 3; l <= size; l++) {
            for (int i = 0; i < size-l+1; i++) {
                int j = i+l-1;
                if (s[i] == s[j] && ok[i+1][j-1]) {
                    ok[i][j] = true;
                    st=i;
                    len=l;
                }
            }
        }

        return s.substr(st, len);
    }
};
