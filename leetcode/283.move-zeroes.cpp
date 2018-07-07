/*
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (51.83%)
 * Total Accepted:    303.8K
 * Total Submissions: 586K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 *
 * Example:
 *
 *
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 *
 * Note:
 *
 *
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 *
 *
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) count++;
    }

    int sol_count = count;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0 && sol_count != 0) {
	sol_count--;
	nums.push_back(0);
	nums.erase(nums.begin() + i);
	i--;
      }
    }
  }
};

/* void printVector(vector<int> v) {
  cout << "[ ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  cout << "] ";
}

int main() {
  vector<int> nums{0, 1, 0, 3, 12};

  Solution S;
  S.moveZeroes(nums);
  printVector(nums);
}
*/
