class Solution {
public:
    int findComplement(int num) {
        int res = 0;
        int base = 1;
        while(num>0){
            if(num%2 == 0)
                res+= base;
            num/=2;
            base*=2;
        }
        return res;
    }
};