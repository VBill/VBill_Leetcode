class Solution {
public:
    bool isPalindrome(int x) {
        vector<char> chs;
        if(x==0)return true;
        if(x<0)return false;
        while(x>0){
            chs.push_back(x%10+'0');
            x/=10;
        }
        int i=0, j=(int)chs.size()-1;
        while(i<=j){
            if(chs[i]!=chs[j])return false;
            i++;    j--;
        }
        return true;
    }
};

//A better solution in discuss area (JAVA)
public boolean isPalindrome(int x) {
    if(x<0 || (x!=0 && x%10==0))
    return false;
    int res = 0;
       while(x>res){
        res = res*10 + x%10;
        x = x/10;
       }
    return (x==res || x==res/10);
}
