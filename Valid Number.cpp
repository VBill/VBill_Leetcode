class Solution {
public:
    int sz;
    
    inline bool isNum(char c){
        return c<='9' && c>='0';
    }
    
    bool getNum(const string &s, int& pos){
        int i=pos;
        while(i<sz && isNum(s[i]))i++;
        if(i==pos)return false;//get fail
        pos=i;
        return true;//result
    }
    
    bool getENum(const string& s, int& pos){
        int i = pos;
        if(i>=sz)return false;//out
        if(s[i]=='e')i++;
        else return false;//no e
        if(s[i]=='+' || s[i]=='-')i++;
        if(!getNum(s, i))return false;//skip and getnum
        pos = i;
        return true;//result
    }
    
    bool getAll(const string& s, int& pos){
        int i=pos;  bool ans = false;
        if(s[i]=='.'){//.num  .nume+-num
            i++;
            ans = getNum(s, i);
            getENum(s, i);
        }else{
            ans = getNum(s,i);
            if(ans){
                if(i<sz && s[i]=='.'){
                    i++;
                    getENum(s, i);
                    getNum(s, i);//num.num  num.e+-num
                    getENum(s, i);
                }else if(i<sz){
                    getENum(s, i);
                }
            }
        }
        
        if(ans)pos=i;
        return ans;
    }

    bool isNumber(string s) {//.3 or 3. are both correct
        sz = (int)s.size();
        int i=0;
        while(i<sz && s[i]==' ')i++;
        if(i>=sz)return false;//out of bound
        if(s[i]=='+' || s[i]=='-')i++;
        
        bool ans = getAll(s, i);
        if(ans){
            if(i>=sz)return true;//is end
            for(; i<sz; i++)ans = ans && s[i]==' ';//skip spaces
        }
        return ans;
    }
};

/*1. (+-)[...]
  ...:	2. num.num: 11.11
  	3. num.(num)e(+-)num 11.e-3 11.e3 11.3e3
  	4. nume(+-)num 11e11 11e-11
	5. .num .44
	6. .(num)e(+-)num .e-12 .e12 .12e12 .12e-12
*/
