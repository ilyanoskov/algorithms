/*
 * [19] Remove Nth Node From End of List
 *
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 *
 * algorithms
 * Medium (33.88%)
 * Total Accepted:    260.8K
 * Total Submissions: 769.8K
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given a linked list, remove the n-th node from the end of list and return
 * its head.
 *
 * Example:
 *
 *
 * Given linked list: 1->2->3->4->5, and n = 2.
 *
 * After removing the second node from the end, the linked list becomes
 * 1->2->3->5.
 *
 *
 * Note:
 *
 * Given n will always be valid.
 *
 * Follow up:
 *
 * Could you do this in one pass?
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

using namespace std;

/*
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};
*/

class Solution {
  private:
	int counter = 1;

  public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* curr = head;
		while (curr->next) {
			counter++;
			curr = curr->next;
		}

		if (n == 1 && counter == 1) {
			return NULL;
		}

		if (counter == n) {
			*head = *head->next;
			return head;
		}

		curr = head;
		if (n == 1) {
			int element = 1;
			while (element != counter - 1) {
				element++;
				curr = curr->next;
			}

			curr->next = NULL;
			return head;
		}

		for (int i = 1; i <= counter; i++) {
			if (i == counter - n + 1) {
				*curr = *curr->next;
				return head;
			}
			curr = curr->next;
		}
	}
};

/*

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);

	Solution S;
	S.removeNthFromEnd(head, 2);
}
*/
