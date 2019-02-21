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
    int rangeSumBST(TreeNode* root, int L, int R)
    {
        if(root!=nullptr)
        {
            rangeSumBST (root-> left, L, R);
            rangeSumBST (root-> right, L, R);
            
            if(root->val >=L &&  root->val <=R)
            {
                sum += root->val;   
            }
        }
        return sum;  
    }
    int sum;
};