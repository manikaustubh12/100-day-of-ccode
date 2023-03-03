class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mxpro,mnpro,n=nums.size();
        sort(nums.begin(),nums.end());
        mxpro=nums[n-1]*nums[n-2]*nums[n-3];
        mnpro=nums[0]*nums[1]*nums[n-1];
        return max(mxpro,mnpro);
    }
};
