/*
 * [102] Binary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (43.47%)
 * Total Accepted:    252.4K
 * Total Submissions: 580.6K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the level order traversal of its nodes' values.
 * (ie, from left to right, level by level).
 *
 *
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 *
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 *
 *
 *
 * return its level order traversal as:
 *
 * [
 * ⁠ [3],
 * ⁠ [9,20],
 * ⁠ [15,7]
 * ]
 *
 *
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
 */

#include <cmath>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
  public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> answer;
		if (!root) return answer;

		queue<TreeNode*> q;
		q.push(root);

		TreeNode* tmp;
		tmp = root;

		while (1) {
			int nodeCount = q.size();
			if (nodeCount == 0) break;

			vector<int> values;
			while (nodeCount > 0) {
				if (tmp->left) q.push(tmp->left);
				if (tmp->right) q.push(tmp->right);
				values.push_back(tmp->val);
				q.pop();

				tmp = q.front();
				nodeCount--;
			}
			answer.push_back(values);
		}

		return answer;
	}
};
