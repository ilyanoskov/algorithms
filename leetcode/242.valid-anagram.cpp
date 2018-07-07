/*
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (48.00%)
 * Total Accepted:    223.1K
 * Total Submissions: 464.8K
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t , write a function to determine if t is an anagram
 * of s.
 *
 * Example 1:
 *
 *
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: s = "rat", t = "car"
 * Output: false
 *
 *
 * Note:
 * You may assume the string contains only lowercase alphabets.
 *
 * Follow up:
 * What if the inputs contain unicode characters? How would you adapt your
 * solution to such case?
 *
 */

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
 public:
  bool isAnagram(string s, string t) {
    unordered_map<char, int> s_s;
    unordered_map<char, int> s_t;

    for (int i = 0; i < s.length(); i++) {
      if (s_s.find(s[i]) != s_s.end()) {
	s_s[s[i]]++;
      } else {
	s_s.insert(make_pair(s[i], 1));
      }
    }

    for (int i = 0; i < t.length(); i++) {
      if (s_t.find(t[i]) != s_t.end()) {
	s_t[t[i]]++;
      } else {
	s_t.insert(make_pair(t[i], 1));
      }
    }

    bool check1 = s_s == s_t;

    return check1;
  }
};
