/*
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (24.38%)
 * Total Accepted:    420.3K
 * Total Submissions: 1.7M
 * Testcase Example:  '123'
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 *
 * Example 1:
 *
 *
 * Input: 123
 * Output: 321
 *
 *
 * Example 2:
 *
 *
 * Input: -123
 * Output: -321
 *
 *
 * Example 3:
 *
 *
 * Input: 120
 * Output: 21
 *
 *
 * Note:
 * Assume we are dealing with an environment which could only store integers
 * within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of
 * this problem, assume that your function returns 0 when the reversed integer
 * overflows.
 *
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int reverse(int x) {
    int biggest = 2147483647;
    string s = to_string(x);
    bool minus = false;
    if (s[0] == '-') {
      minus = true;
      s = s.substr(1, -1);
    };

    std::reverse(s.begin(), s.end());
    long long int answer;
    answer = stol(s);
    if (answer > biggest) return 0;
    if (minus) answer = -answer;

    return answer;
  }
};
