class Solution {
public:
    bool judgeCircle(string moves) {
        int hor = 0;
        int ver = 0;
        
        int len = moves.length();
        for(int i=0;i<len;i++){
            if(moves[i]=='U')
                ver++;
            else if(moves[i]=='D')
                ver--;
            else if(moves[i]=='L')
                hor--;
            else
                hor++;
        }
        if(hor==0 && ver==0)
            return true;
        else
            return false;
    }
};