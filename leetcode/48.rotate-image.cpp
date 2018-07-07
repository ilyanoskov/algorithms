/*
 * [48] Rotate Image
 *
 * https://leetcode.com/problems/rotate-image/description/
 *
 * algorithms
 * Medium (42.62%)
 * Total Accepted:    169.1K
 * Total Submissions: 396.8K
 * Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
 *
 * You are given an n x n 2D matrix representing an image.
 *
 * Rotate the image by 90 degrees (clockwise).
 *
 * Note:
 *
 * You have to rotate the image in-place, which means you have to modify the
 * input 2D matrix directly. DO NOT allocate another 2D matrix and do the
 * rotation.
 *
 * Example 1:
 *
 *
 * Given input matrix =
 * [
 * ⁠ [1,2,3],
 * ⁠ [4,5,6],
 * ⁠ [7,8,9]
 * ],
 *
 * rotate the input matrix in-place such that it becomes:
 * [
 * ⁠ [7,4,1],
 * ⁠ [8,5,2],
 * ⁠ [9,6,3]
 * ]
 *
 *
 * Example 2:
 *
 *
 * Given input matrix =
 * [
 * ⁠ [ 5, 1, 9,11],
 * ⁠ [ 2, 4, 8,10],
 * ⁠ [13, 3, 6, 7],
 * ⁠ [15,14,12,16]
 * ],
 *
 * rotate the input matrix in-place such that it becomes:
 * [
 * ⁠ [15,13, 2, 5],
 * ⁠ [14, 3, 4, 1],
 * ⁠ [12, 6, 8, 9],
 * ⁠ [16, 7,10,11]
 * ]
 *
 *
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    int dimension = matrix[0].size();

    vector<vector<int>> new_matrix;

    vector<int> v;
    for (int i = 0; i < dimension; i++) {
      v.push_back(0);
    }
    for (int i = 0; i < dimension; i++) {
      new_matrix.push_back(v);
    }

    if (dimension != 0 && dimension != 1) {
      for (int i = dimension - 1; i >= 0; i--) {
	for (int j = 0; j < dimension; j++) {
	  new_matrix[dimension - j - 1][i] = matrix[i][j];
	}
      }
      matrix = new_matrix;
    }
  }
};

/*

void printVector(vector<vector<int>>& matrix) {
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix.size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
}

int main() {
  vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  Solution S;
  S.rotate(matrix);
  printVector(matrix);
}
*/
