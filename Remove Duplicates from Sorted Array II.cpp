class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int jump=0;
        int pre=nums[0]+1, dup=1;
        for(int i=0; i<(int)nums.size(); i++){
            if(nums[i]==pre){
                dup++;
                if(dup>2)
                    jump++;
            }else{
                pre=nums[i];
                dup=1;
            }
            nums[i-jump]=nums[i];
        }
        return nums.size()-jump;
    }
};
