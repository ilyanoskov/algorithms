/*
 * [61] Rotate List
 *
 * https://leetcode.com/problems/rotate-list/description/
 *
 * algorithms
 * Medium (24.71%)
 * Total Accepted:    141K
 * Total Submissions: 570.6K
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given a linked list, rotate the list to the right by k places, where k is
 * non-negative.
 *
 * Example 1:
 *
 *
 * Input: 1->2->3->4->5->NULL, k = 2
 * Output: 4->5->1->2->3->NULL
 * Explanation:
 * rotate 1 steps to the right: 5->1->2->3->4->NULL
 * rotate 2 steps to the right: 4->5->1->2->3->NULL
 *
 *
 * Example 2:
 *
 *
 * Input: 0->1->2->NULL, k = 4
 * Output: 2->0->1->NULL
 * Explanation:
 * rotate 1 steps to the right: 2->0->1->NULL
 * rotate 2 steps to the right: 1->2->0->NULL
 * rotate 3 steps to the right: 0->1->2->NULL
 * rotate 4 steps to the right: 2->0->1->NULL
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

class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (!head) return head;
    ListNode* end = head;

    int counter = 1;
    while (end->next) {
      counter++;
      end = end->next;
    }

    int step = k % counter;
    if (step == 0) return head;

    ListNode *curr_node = head, *prev = NULL;
    for (int i = 0; i < counter - step; i++) {
      prev = curr_node;
      curr_node = curr_node->next;
    }

    end->next = head;
    prev->next = NULL;

    return curr_node;
  }
};
