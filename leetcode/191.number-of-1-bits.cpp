/*
 * [191] Number of 1 Bits
 *
 * https://leetcode.com/problems/number-of-1-bits/description/
 *
 * algorithms
 * Easy (40.67%)
 * Total Accepted:    202.6K
 * Total Submissions: 498.1K
 * Testcase Example:  '           0 (00000000000000000000000000000000)'
 *
 * Write a function that takes an unsigned integer and returns the number of
 * '1' bits it has (also known as the Hamming weight).
 *
 * Example 1:
 *
 *
 * Input: 11
 * Output: 3
 * Explanation: Integer 11 has binary representation
 * 00000000000000000000000000001011
 *
 *
 * Example 2:
 *
 *
 * Input: 128
 * Output: 1
 * Explanation: Integer 128 has binary representation
 * 00000000000000000000000010000000
 *
 *
 */

#include <iostream>
using namespace std;

class Solution {
  public:
	int hammingWeight(uint32_t n) {
		if (n == 0) return 0;
		int count = 0;
		for (int i = 0; i < 32; i++) {
			int new_num = 1 << i;
			if (n & new_num) count++;
		}
		return count;
	}
};

/*
int main() {
	Solution S;
	cout << S.hammingWeight(128);
}
*/
