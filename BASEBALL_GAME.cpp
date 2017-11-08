class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> points;
        int sum = 0;
        
        int sz = ops.size();
        int i,j,temp1,temp2;
        int cur;
        for(i=0;i<sz;i++)
        {
            temp1 = 0,temp2 = 0;
            if(ops[i]=="+"){
                if(!points.empty()){
                    temp1 = points.top();
                    points.pop();
                
                if(!points.empty()){
                    temp2 = points.top();
                }
                    points.push(temp1);
                    
                }
                    points.push(temp1+temp2);
                    sum+=(temp1+temp2);
                }
            else if(ops[i]=="D"){
                if(!points.empty()){
                    temp1 = points.top();
                    temp1*=2;
                }
                points.push(temp1);
                sum+=temp1;
            }
            else if(ops[i]=="C"){
                if(!points.empty()){
                    temp1 = points.top();
                    points.pop();
                }
                sum-=temp1;
            }
            else{
                sum+=stoi(ops[i]);
                points.push(stoi(ops[i]));
            }
            }
        return sum;
        }
    };