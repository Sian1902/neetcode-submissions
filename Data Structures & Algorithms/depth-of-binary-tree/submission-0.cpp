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
    int maxDepth(TreeNode* root) {
       return maxDepthRec(root, 1);
    }
private:
	int maxDepthRec(TreeNode* root, int depth) {
		if (!root) return depth - 1;
		return max(maxDepthRec(root->left, depth + 1), maxDepthRec(root->right, depth + 1));
	}
};
