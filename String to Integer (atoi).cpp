class Solution {
public:
    int myAtoi(string str) {
        int ans = 0, sgn=1, i, ed = 0x7fffffff/10;
        for(i=0; i<(int)str.size() && str[i]==' '; i++)
            ;//only skip white-spaces
        if((int)str.size()==i)return 0;
        
        if(str[i]=='-'){sgn=-1; i++;}
        else if(str[i]=='+'){i++;}
        else if(str[i]>'9' || str[i]<'0')return 0;
        
        for(; i<(int)str.size(); i++){
            if(str[i]<'0' || str[i]>'9')break;
            if(sgn==1 && (ans>ed || ans==ed && str[i]>'7'))return INT_MAX;
            else if(sgn==-1 && (ans>ed || ans==ed && str[i]>'8'))return INT_MIN;
            else ans = ans*10+(str[i]-'0');
        }
        
        return ans*sgn;
    }
};
