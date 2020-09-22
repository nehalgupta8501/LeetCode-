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
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> array;
        inorder(root, array);
        return array;
    }
    void inorder(TreeNode *root, vector<int> &array)
    {
        if (root != NULL)
        {
            if (root->left != NULL)
            {
                inorder(root->left, array);
            }
            array.push_back(root->val);
            if (root->right != NULL)
            {
                inorder(root->right, array);
            }
        }
    }
};