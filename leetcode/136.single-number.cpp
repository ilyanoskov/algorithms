/*
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (56.01%)
 * Total Accepted:    312.1K
 * Total Submissions: 557.1K
 * Testcase Example:  '[2,2,1]'
 *
 * Given a non-empty array of integers, every element appears twice except for
 * one. Find that single one.
 *
 * Note:
 *
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 *
 * Example 1:
 *
 *
 * Input: [2,2,1]
 * Output: 1
 *
 *
 * Example 2:
 *
 *
 * Input: [4,1,2,1,2]
 * Output: 4
 *
 *
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    std::map<long long int, bool> values;
    for (int i = 0; i < nums.size(); i++) {
      if (values.find(nums[i]) == values.end()) {
	values.insert(make_pair(nums[i], true));
      } else {
	values[nums[i]] = false;
      }
    }
    int result;
    for (int i = 0; i < nums.size(); i++) {
      if (values[(nums[i])] == true) {
	result = nums[i];
      }
    }
    return result;
  }
};
