/*
 * [344] Reverse String
 *
 * https://leetcode.com/problems/reverse-string/description/
 *
 * algorithms
 * Easy (60.66%)
 * Total Accepted:    259.2K
 * Total Submissions: 427.3K
 * Testcase Example:  '"hello"'
 *
 * Write a function that takes a string as input and returns the string
 * reversed.
 *
 *
 * Example:
 * Given s = "hello", return "olleh".
 *
 */

#include <algorithm>
class Solution {
 public:
  string reverseString(string s) {
    reverse(s.begin(), s.end());

    return s;
  }
};
