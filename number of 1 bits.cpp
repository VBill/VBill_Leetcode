class Solution{
public:
    int hammingWeight(uint32_t n){
        int a=0;
        unsigned int nn=1;
        for(int i=0; i<32; i++){
            if(nn & n)
                a++;
            n=n>>1;
        }
        return a;
    }
};
