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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> array;
        postorder(root, array);
        return array;
    }
    void postorder(TreeNode *root, vector<int> &array)
    {
        if (root != NULL)
        {
            if (root->left != NULL)
            {
                postorder(root->left, array);
            }
            if (root->right != NULL)
            {
                postorder(root->right, array);
            }
            array.push_back(root->val);
        }
    }
};