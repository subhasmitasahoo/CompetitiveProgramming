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
private:
    int cnt = 0;
public:
    int get_height(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(get_height(root->left),get_height(root->right));
    }
    
    double get_sum(TreeNode* root, int level){
        if(!root)
            return 0;
        if(level == 0){
            cnt++;
            return root->val;
        }
        return get_sum(root->left,level-1)+get_sum(root->right,level-1);  
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        int height = get_height(root);
        vector<double> res;
        for(int i=0;i<height;i++){
            cnt = 0;
            double temp = get_sum(root,i);
            res.push_back(temp/cnt);
        }
        return res;
    }
};