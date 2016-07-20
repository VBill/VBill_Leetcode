class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return -1;
        if(needle.size()==0)return 0;
        for(int i=0; i<=haystack.size()-needle.size(); i++){
            bool ok = true;
            for(int j=0; j<needle.size(); j++){
                if(haystack[i+j]!=needle[j]){
                    ok=false;   break;
                }
            }
            if(ok)return i;
        }
        return -1;
    }
};
