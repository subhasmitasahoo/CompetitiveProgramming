class Solution {
public:
    vector<string> keyboard;
    map<char,int> lmap;
    int rows;
    
    Solution(){
        keyboard.push_back("qwertyuiop");
        keyboard.push_back("asdfghjkl");
        keyboard.push_back("zxcvbnm");
        rows = 3;
        for(int i=0;i<3;i++){
            int len = keyboard[i].length();
            for(int j=0;j<len;j++){
                lmap.insert(make_pair(keyboard[i][j],i));
            }
        }
        
    }
    
    vector<string> findWords(vector<string>& words) {
      
        vector<string> res;
        int sz = words.size();
        for(int i=0;i<sz;i++)
        {
            int len = words[i].length();
            string temp = words[i];
            int cur_index = lmap[tolower(temp[0])];
    
            int j=1;
            for(;j<len;j++)
            {
                if(lmap[tolower(temp[j])]!=cur_index)
                {
                    //cout<<"i. "<<temp<<" expected"<<cur_index<<" but "<<lmap[tolower(temp[j])]<<endl;
                    break;
                }
                    
            }
            if(j>=len)
                res.push_back(temp);
        }
        return res;
    }
};