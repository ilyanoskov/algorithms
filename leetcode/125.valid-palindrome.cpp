/*
 * [125] Valid Palindrome
 *
 * https://leetcode.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (27.58%)
 * Total Accepted:    237.5K
 * Total Submissions: 861K
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * Given a string, determine if it is a palindrome, considering only
 * alphanumeric characters and ignoring cases.
 *
 * Note: For the purpose of this problem, we define empty string as valid
 * palindrome.
 *
 * Example 1:
 *
 *
 * Input: "A man, a plan, a canal: Panama"
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: "race a car"
 * Output: false
 *
 *
 */

#include <algorithm>
#include <iostream>
#include <locale>
#include <string>

using namespace std;

bool belongs(char c) {
  return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
	  (c >= 'a' && c <= 'z'));
}

char easytolower(char in) {
  if (in <= 'Z' && in >= 'A') return in - ('Z' - 'z');
  return in;
}

class Solution {
 public:
  bool isPalindrome(string s) {
    if (s == "") return true;
    string new_string;
    for (int i = 0; i < s.length(); i++) {
      if (belongs(s[i])) new_string += s[i];
    }

    transform(new_string.begin(), new_string.end(), new_string.begin(),
	      easytolower);
    string palindromeString = new_string;
    reverse(palindromeString.begin(), palindromeString.end());

    cout << palindromeString;
    return (new_string == palindromeString);
  }
};
