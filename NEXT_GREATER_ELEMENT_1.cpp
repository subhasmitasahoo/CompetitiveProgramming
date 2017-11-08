class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int nsz = nums.size();
        int fnsz = findNums.size();
        int i,j;
        vector<int> res;
        stack<int> temp;
        map<int,int> grt;
        for(i=0;i<nsz;i++){
            while(!temp.empty() && temp.top()<=nums[i]){
                grt.insert(make_pair(temp.top(),nums[i]));
                temp.pop();
            }
            temp.push(nums[i]);
        }
        while(!temp.empty()){
            grt.insert(make_pair(temp.top(),-1));
            temp.pop();
        }
        
        for(i=0;i<fnsz;i++){
            res.push_back(grt[findNums[i]]);
        }
        return res;
    }
};