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
    // List to store the node values.
    vector<int> nodeValues;

    void dfs(TreeNode* node) {
        if (node == NULL) {
            return;
        }

        nodeValues.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }

    int getMinimumDifference(TreeNode* root) {
        dfs(root);

        sort(nodeValues.begin(), nodeValues.end());
        int minDifference = INT_MAX;
        for (int i = 1; i < nodeValues.size(); i++) {
            minDifference = min(minDifference, nodeValues[i] - nodeValues[i - 1]);
        }

        return minDifference;
    }
};