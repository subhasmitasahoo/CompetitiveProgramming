class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int res = 0;
        int sz = candies.size();
        set<int> cnd;
        
        for(int i=0;i<sz;i++){
            if(cnd.find(candies[i])==cnd.end())
            {
                cnd.insert(candies[i]);
                res++;
            }
        }
        res = (res>=(sz/2))?(sz/2):res;
        return res;
    }
};