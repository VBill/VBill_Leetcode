class Solution {
    public:
    void rotate(int nums[], int n, int k) {
        k=k%n;
        if(k==0)return;
        int *tmp=new int[n];
        memcpy(tmp, nums, n*sizeof(int));
        memcpy(nums, &tmp[n-k], n*sizeof(int));
        memcpy(&nums[k], tmp, (n-k)*sizeof(int));
        delete []tmp;
    }
};
