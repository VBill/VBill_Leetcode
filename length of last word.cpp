class Solution {
public:
    int lengthOfLastWord(const char *s) {
        if(strlen(s)==0)return 0;
        int j=strlen(s)-1;
        int size=0;
        while(s[j]==' ')
            j--;
        while(j>=0){
            if(s[j]!=' '){
                size++;
                j--;
            }else{
                break;
            }
        }
        return size;
    }
};
