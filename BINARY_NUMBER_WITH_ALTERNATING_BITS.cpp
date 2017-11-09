class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cur = n%2;
        cur = 1-cur;
        n/=2;
        while(n>0){
            if(n%2 != cur)
                return false;
            n/=2;
            cur = 1-cur;
        }
        return true;
    }
};