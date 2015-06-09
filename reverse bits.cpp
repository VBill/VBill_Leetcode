class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int mask_h=1<<31, mask_l=1, a=0;
        for(int i=0; i<32; i++){
            if(mask_h&n){
                    a=a|mask_l;
            }
            mask_h=mask_h>>1;
            mask_l=mask_l<<1;
        }
        return a;
    }
};
