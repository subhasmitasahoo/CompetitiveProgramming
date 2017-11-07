class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sz = nums.size();
        int res = 0;
        for(int i=0;i<sz;i+=2){
            res+= nums[i];
        }
        return res;
    }
};