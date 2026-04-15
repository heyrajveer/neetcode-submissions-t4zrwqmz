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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if( p->val>=root->val && q->val<=root->val || p->val<=root->val && q->val>=root->val ){
            return root;
        }
         TreeNode* leftt =NULL;
        if(p->val<root->val && q->val<root->val){
        leftt=lowestCommonAncestor(root->left, p,  q);
        }
        TreeNode* rightt =NULL;
        if(p->val>root->val && q->val>root->val){
         rightt=lowestCommonAncestor(root->right, p,  q);
        }
        if(leftt==NULL){
            return rightt;
        }
        if(rightt==NULL){
            return leftt;
        }
        return root;
    }
};
