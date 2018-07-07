/*
 * [53] Maximum Subarray
 *
 * https://leetcode.com/problems/maximum-subarray/description/
 *
 * algorithms
 * Easy (40.69%)
 * Total Accepted:    329.7K
 * Total Submissions: 810.2K
 * Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
 *
 * Given an integer array nums, find the contiguous subarray (containing at
 * least one number) which has the largest sum and return its sum.
 *
 * Example:
 *
 *
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
 * Output: 6
 * Explanation: [4,-1,2,1] has the largest sum = 6.
 *
 *
 * Follow up:
 *
 * If you have figured out the O(n) solution, try coding another solution using
 * the divide and conquer approach, which is more subtle.
 *
 */

#include <cmath>
#include <vector>
using namespace std;

class Solution {
  public:
	int maxSubArray(vector<int>& nums) {
		vector<int> dp;
		int size = nums.size();

		if (size > 0) {
			dp.push_back(nums[0]);
		}

		int maximum = nums[0];

		for (int i = 1; i < size; i++) {
			dp.push_back(nums[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0));
			maximum = max(maximum, dp[i]);
		}

		return maximum;
	}
};
