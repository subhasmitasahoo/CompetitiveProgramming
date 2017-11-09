class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur = 0;
        int res = 0;
        int sz = nums.size();
        for(int i=0;i<sz;i++){
            if(nums[i]==0){
                res = max(res,cur);
                cur = 0;
            }
            else{
                cur++;
            }
        }
        res = max(res,cur);
        return res;
    }
};