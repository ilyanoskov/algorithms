#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    vector<char> solving;
    for (int i = 0; i < s.length(); i++) {
      if (!solving.empty()) {
	if (match(solving.back(), s[i])) {
	  solving.pop_back();
	} else {
	  solving.push_back(s[i]);
	}
      } else {
	solving.push_back(s[i]);
      }
    }
    return solving.empty();
  }

 private:
  bool match(char first, char second) {
    if (first == '{' and second == '}') return true;
    if (first == '(' and second == ')') return true;
    if (first == '[' and second == ']') return true;
    return false;
  }
};
