class Solution {
public:
    string reverseWords(string s) {     
        stack<char> temp;
        int len = s.length();
        string res;
        for(int i=0;i<len;i++){
            if(s[i]==' ')
            {
                while(!temp.empty()){
                    res.push_back(temp.top());
                    temp.pop();
                }
                res.push_back(' ');
            }
            else{
                temp.push(s[i]);
            }
        }
        while(!temp.empty()){
                    res.push_back(temp.top());
                    temp.pop();
                }
        return res;
        
    }
};