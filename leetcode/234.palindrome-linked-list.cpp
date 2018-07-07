/*
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (33.77%)
 * Total Accepted:    169.3K
 * Total Submissions: 501.2K
 * Testcase Example:  '[1,2]'
 *
 * Given a singly linked list, determine if it is a palindrome.
 *
 * Example 1:
 *
 *
 * Input: 1->2
 * Output: false
 *
 * Example 2:
 *
 *
 * Input: 1->2->2->1
 * Output: true
 *
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <algorithm>
#include <vector>
using namespace std;
class Solution {
  public:
	bool isPalindrome(ListNode* head) {
		ListNode* curr = head;
		vector<int> v;

		while (curr) {
			v.push_back(curr->val);
			curr = curr->next;
		}

		vector<int> t = v;
		reverse(t.begin(), t.end());

		return (t == v);
	}
};
