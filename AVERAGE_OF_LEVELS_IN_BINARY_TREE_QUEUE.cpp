/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> res;
        queue<TreeNode*> q,temp;
        q.push(root);
        double sum = 0, cnt = 0;
        TreeNode *temp_node;
        while(!q.empty()){
            temp_node = q.front();
            sum+=temp_node->val;
            cnt++;
            q.pop();
            if((temp_node->left))
                temp.push(temp_node->left);
            if((temp_node->right))
                temp.push(temp_node->right);
            if(q.empty()){
                res.push_back(sum*1.0/cnt);
                q = temp;
                sum = 0,cnt = 0;
                temp = queue<TreeNode*>();
            }
        }
        return res;
    }
};