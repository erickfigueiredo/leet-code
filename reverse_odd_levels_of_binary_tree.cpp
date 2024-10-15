// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/

// Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void reverseOddLevels(TreeNode* left, TreeNode* right, int level) {
        if (left == nullptr || right == nullptr) {
            return;
        }

        if (level & 1) {
            swap(left->val, right->val);
        }

        reverseOddLevels(left->left, right->right, level + 1);
        reverseOddLevels(left->right, right->left, level + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        if (root == nullptr) {
            return root;
        }

        reverseOddLevels(root->left, root->right, 1);

        return root;
    }
};
