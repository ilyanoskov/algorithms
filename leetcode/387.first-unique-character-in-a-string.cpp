/*
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (47.25%)
 * Total Accepted:    133.7K
 * Total Submissions: 283K
 * Testcase Example:  '"leetcode"'
 *
 *
 * Given a string, find the first non-repeating character in it and return it's
 * index. If it doesn't exist, return -1.
 *
 * Examples:
 *
 * s = "leetcode"
 * return 0.
 *
 * s = "loveleetcode",
 * return 2.
 *
 *
 *
 *
 * Note: You may assume the string contain only lowercase letters.
 *
 */

#include <iostream>
#include <map>

using namespace std;

using namespace std;

class Solution {
 public:
  int firstUniqChar(string s) {
    map<char, int> charMap;

    for (int i = 0; i < s.length(); i++) {
      charMap[s[i]] = 0;
    }

    for (int i = 0; i < s.length(); i++) {
      charMap[s[i]] += 1;
    }

    for (int i = 0; i < s.length(); i++) {
      if (charMap[s[i]] == 1) return i;
    }

    return -1;
  }
};

/*int main() {
  Solution S;

  cout << S.firstUniqChar("leetcode");
}
*/
