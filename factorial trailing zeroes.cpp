class Solution {
public:
    int trailingZeroes(int n) {
        int expo=floor(log(n)/log(5));
        int ans=0;
        for(int i=1; i<=expo; i++){
            ans+=floor( n/( pow(5, i) ) );
        }
        return ans;
    }
};
