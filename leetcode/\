/*
 * [461] Hamming Distance
 *
 * https://leetcode.com/problems/hamming-distance/description/
 *
 * algorithms
 * Easy (69.55%)
 * Total Accepted:    165.6K
 * Total Submissions: 238.2K
 * Testcase Example:  '1\n4'
 *
 * The Hamming distance between two integers is the number of positions at
 * which the corresponding bits are different.
 *
 * Given two integers x and y, calculate the Hamming distance.
 *
 * Note:
 * 0 ≤ x, y < 231.
 *
 *
 * Example:
 *
 * Input: x = 1, y = 4
 *
 * Output: 2
 *
 * Explanation:
 * 1   (0 0 0 1)
 * 4   (0 1 0 0)
 * ⁠      ↑   ↑
 *
 * The above arrows point to positions where the corresponding bits are
 * different.
 *
 *
 */

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
	int hammingDistance(int x, int y) {
		int counter = 0;
		int boundary = max(x, y);
		int count = 0;

		while (boundary > 0) {
			count++;
			boundary = boundary >> 1;
		}

		for (int i = 0; i <= count; i++) {
			int xnum = x & (1 << i);
			int ynum = y & (1 << i);
			if (xnum > 0) xnum = 1;
			if (ynum > 0) ynum = 1;

			if (xnum != ynum) counter++;
		}
		return counter;
	}
};

/*
int main() {
	Solution S;
	vector<int> yy;
	vector<int> xx;
	cout << S.hammingDistance(93, 73);
}
*/
