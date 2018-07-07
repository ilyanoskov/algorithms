/*
 * [108] Convert Sorted Array to Binary Search Tree
 *
 * https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
 *
 * algorithms
 * Easy (45.33%)
 * Total Accepted:    183.5K
 * Total Submissions: 404.9K
 * Testcase Example:  '[-10,-3,0,5,9]'
 *
 * Given an array where elements are sorted in ascending order, convert it to a
 * height balanced BST.
 *
 * For this problem, a height-balanced binary tree is defined as a binary tree
 * in which the depth of the two subtrees of every node never differ by more
 * than 1.
 *
 * Example:
 *
 *
 * Given the sorted array: [-10,-3,0,5,9],
 *
 * One possible answer is: [0,-3,9,-10,null,5], which represents the following
 * height balanced BST:
 *
 * ⁠     0
 * ⁠    / \
 * ⁠  -3   9
 * ⁠  /   /
 * ⁠-10  5
 *
 *
 */

#include <iostream>
#include <vector>

using namespace std;
/*
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
*/

int getMid(int size) {
	int mid;
	return size / 2;
}

TreeNode* getBST(vector<int>& nums, int start, int end) {
	if (start == end) return NULL;
	if (nums.size() == 1) return new TreeNode(nums.back());

	vector<int> v;
	for (int i = start; i < end; i++) {
		v.push_back(nums[i]);
	}

	int size = v.size();
	int mid = getMid(size);
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = getBST(v, 0, mid);
	root->right = getBST(v, mid, size - 1);
	return root;
}

class Solution {
  public:
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		int mid;
		int size = nums.size();

		mid = getMid(size);

		return getBST(nums, 0, size);
	}
};

/*
int main() {
	vector<int> v = {1, 2, 3, 4, 5};
	Solution S;
	TreeNode* T = S.sortedArrayToBST(v);
}
*/
