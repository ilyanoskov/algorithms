/*
 * [118] Pascal's Triangle
 *
 * https://leetcode.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (40.86%)
 * Total Accepted:    178.7K
 * Total Submissions: 437.4K
 * Testcase Example:  '5'
 *
 * Given a non-negative integer numRows, generate the first numRows of Pascal's
 * triangle.
 *
 *
 * In Pascal's triangle, each number is the sum of the two numbers directly
 * above it.
 *
 * Example:
 *
 *
 * Input: 5
 * Output:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 *
 *
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> makePascal(vector<int> v) {
	vector<int> Pascal{1};

	for (auto x : v) {
		Pascal.push_back(x);
	}

	Pascal.push_back(1);

	return Pascal;
}

class Solution {
  public:
	vector<vector<int>> generate(int n) {
		vector<int> firstRow{1};
		vector<int> secondRow{1, 1};

		vector<vector<int>> answer;

		if (n == 0) {
			return answer;
		}

		if (n == 1) {
			answer.push_back(firstRow);
			return answer;
		}

		if (n == 2) {
			answer.push_back(firstRow);
			answer.push_back(secondRow);
			return answer;
		}

		answer.push_back(firstRow);
		answer.push_back(secondRow);

		for (int i = 2; i < n; i++) {
			vector<int> row;
			vector<int> previous_row = answer[i - 1];
			for (int i = 0; i < previous_row.size() - 1; i++) {
				int value =
				    previous_row[i] + previous_row[i + 1];
				row.push_back(value);
			}
			row = makePascal(row);
			answer.push_back(row);
		}
		return answer;
	}
};
