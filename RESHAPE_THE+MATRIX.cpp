class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rowSize = nums.size();
        int colSize = nums[0].size();
        
        if(r*c != rowSize*colSize)
            return nums;
        vector<vector<int>> result;
        int curCol = 0;
        int i,j;
        vector<int> temp;
        for(i=0;i<rowSize;i++)
        {
            for(j=0;j<colSize;j++){
                temp.push_back(nums[i][j]);
                curCol++;
                if(curCol == c){
                    result.push_back(temp);
                    curCol=0;
                    temp.clear();
                }
            }
        }
        return result;
    }
};