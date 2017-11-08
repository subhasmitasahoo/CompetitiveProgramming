class Solution {
public:
    bool canPermutePalindrome(string s) {
        bool flag[128]={false};
        int len = s.length();
        int i;
        int cnt = 0;
        int cur;
        for(i=0;i<len;i++){
            cur = s[i];
            if(!flag[cur]){
                flag[cur] = true;
                cnt++;
            }
            else{
                flag[cur] = false;
                cnt--;
            }
        }
        if(cnt<=1)
            return true;
        else
            return false;
    }
};