/*
 * [206] Reverse Linked List
 *
 * https://leetcode.com/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (47.70%)
 * Total Accepted:    368.2K
 * Total Submissions: 771.8K
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * Reverse a singly linked list.
 *
 * Example:
 *
 *
 * Input: 1->2->3->4->5->NULL
 * Output: 5->4->3->2->1->NULL
 *
 *
 * Follow up:
 *
 * A linked list can be reversed either iteratively or recursively. Could you
 * implement both?
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

#include <iostream>
#include <vector>
using namespace std;

/*
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

void Print(ListNode* head) {
	ListNode* curr = head;
	while (curr) {
		cout << curr->val << " ";
		curr = curr->next;
	}
}

*/

class Solution {
  public:
	ListNode* reverseList(ListNode* head) {
		ListNode* curr = head;

		vector<ListNode*> v;

		while (curr) {
			v.push_back(curr);
			curr = curr->next;
		}
		if (v.size() == 0) return head;
		if (v.size() == 1) return head;
		if (v.size() == 2) {
			ListNode* first = v[1];
			first->next = v[0];
			first->next->next = NULL;
			return first;
		};

		ListNode* new_head;

		new_head = v[v.size() - 1];
		curr = new_head;

		for (int i = v.size() - 2; i >= 0; i--) {
			curr->next = v[i];
			curr = curr->next;
		}
		curr->next = NULL;
		return new_head;
	}
};

/*

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	Solution S;
	head = S.reverseList(head);
	Print(head);
}
*/
