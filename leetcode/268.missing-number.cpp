/*
 * [268] Missing Number
 *
 * https://leetcode.com/problems/missing-number/description/
 *
 * algorithms
 * Easy (45.45%)
 * Total Accepted:    181.5K
 * Total Submissions: 399.4K
 * Testcase Example:  '[3,0,1]'
 *
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n,
 * find the one that is missing from the array.
 *
 * Example 1:
 *
 *
 * Input: [3,0,1]
 * Output: 2
 *
 *
 * Example 2:
 *
 *
 * Input: [9,6,4,2,3,5,7,0,1]
 * Output: 8
 *
 *
 * Note:
 * Your algorithm should run in linear runtime complexity. Could you implement
 * it using only constant extra space complexity?
 *
 */

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void print(unordered_set<int> us) {
  for (auto x : us) {
    cout << x << " ";
  }

  cout << "\n";
}

class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    unordered_set<int> map;

    map.insert(nums.size());

    for (int i = 0; i < nums.size(); i++) {
      if (map.count(i)) {
	map.erase(i);
      } else {
	map.insert(i);
      }

      if (map.count(nums[i])) {
	map.erase(nums[i]);
      } else {
	map.insert(nums[i]);
      }
    }

    return *map.begin();
  }
};

/*
int main() {
  Solution S;
  vector<int> nums{1, 2};
  cout << S.missingNumber(nums);
}
*/
