class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)return true;
        char *tmp=new char[s.size()];
        bool ans=true;
        int i, j, strsize;
        char c;
        j=0;
        for(i=0; i<(int)s.size(); i++){
            c=s.at(i);
            if( c>='A' &&  c<='Z'){
                c=tolower(c);
                tmp[j++]=c;
            }else if( c>='a' &&  c<='z' ){
                tmp[j++]=c;
            }else if( c>='0' &&  c<='9'){
                tmp[j++]=c;
            }
        }
        tmp[j]='\0';

        strsize=j;
        i=0;
        j=strsize-1;
        while(true){
            if(tmp[i]==tmp[j]){
                i++;
                j--;
            }else{
                ans=false;
                break;
            }
            if(i>j)break;
        }
        return ans;
    }
};

