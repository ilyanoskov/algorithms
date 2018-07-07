/*
 * [141] Linked List Cycle
 *
 * https://leetcode.com/problems/linked-list-cycle/description/
 *
 * algorithms
 * Easy (34.88%)
 * Total Accepted:    270.2K
 * Total Submissions: 774.7K
 * Testcase Example:  '[]\nno cycle'
 *
 *
 * Given a linked list, determine if it has a cycle in it.
 *
 *
 *
 * Follow up:
 * Can you solve it without using extra space?
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

#include <unordered_set>
using namespace std;

class Solution {
  public:
	bool hasCycle(ListNode* head) {
		ListNode* first = head;
		ListNode* second = head;

		while (first) {
			if (first->next) {
				first = first->next;
			} else
				return false;
			if (second->next && second->next->next)
				second = second->next->next;
			else
				return false;
			if (first == second) return true;
		}

		return false;
	}
};
