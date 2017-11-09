class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr = 0;
        int sz = nums.size();
        for(int i=0;i<sz;i++)
            xr^=nums[i];
        return xr;
    }
};