// LeetCode Problem: Vertical Order Traversal of a Binary Tree
// Problem Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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
    void traverse(TreeNode* node, int row, int col, vector<tuple<int, int, int>>& nodes) {
    if (!node) return;

    // Store (col, row, value)
    nodes.push_back({col, row, node->val});

    // Go left (column decreases)
    traverse(node->left, row + 1, col - 1, nodes);

    // Go right (column increases)
    traverse(node->right, row + 1, col + 1, nodes);
}

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int, int, int>> node;
        traverse(root,0,0,node);
        sort(node.begin(),node.end()); 
        vector<vector<int>> res;
        int prev_col=INT_MIN;
        for (auto& [col, row, val] : node) {
            if (col!=prev_col) {
                res.push_back({});
                prev_col=col;
            }
            res.back().push_back(val);
        }

        return res;
    }
};