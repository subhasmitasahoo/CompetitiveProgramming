class Solution {
public:
    int findLUSlength(string a, string b) {
        int len1 = a.length();
        int len2 = b.length();
        
        if(len1!=len2)
            return max(len1,len2);
        if(a==b)
            return -1;
        return len1;
    }
};