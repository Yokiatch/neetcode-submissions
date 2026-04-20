/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void countnodes(TreeNode* root,int& count,int prev){
        if(!root) return ;
        if(root->val>=prev){
            prev = root->val;
            count++;
        }
        countnodes(root->left,count,prev);
        countnodes(root->right,count,prev);
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        countnodes(root,count,root->val);
        return count;
    }
};
