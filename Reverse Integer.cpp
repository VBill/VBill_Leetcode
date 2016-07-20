class Solution {
public:
    int reverse(int x) {
        if(x==0)return 0;
        bool neg = x<0;
        if(neg){
            x=-x;
        }
        int t = 0, mx = 0x7fffffff/10;
        while(x>0){
            if(t>mx)return 0;
            t=10*t+x%10;
            x/=10;
        }
        if(neg)t=-t;
        return t;
    }
};
