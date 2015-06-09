class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==n)return m;
        if(m==0)return 0;
        if(floor( log(m)/log(2) )!=floor( log(n)/log(2) ) )
                 return 0;
        unsigned int mm=(unsigned int)m;
        unsigned int nn=(unsigned int)n;
        unsigned int xx=mm^nn;
        int k=1+(int)(floor(log(xx)/log(2)));
        return (m>>k)<<k;
    }
};
