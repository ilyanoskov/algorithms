/*
 * [412] Fizz Buzz
 *
 * https://leetcode.com/problems/fizz-buzz/description/
 *
 * algorithms
 * Easy (57.94%)
 * Total Accepted:    124.9K
 * Total Submissions: 215.6K
 * Testcase Example:  '1'
 *
 * Write a program that outputs the string representation of numbers from 1 to
 * n.
 *
 * But for multiples of three it should output “Fizz” instead of the number and
 * for the multiples of five output “Buzz”. For numbers which are multiples of
 * both three and five output “FizzBuzz”.
 *
 * Example:
 *
 * n = 15,
 *
 * Return:
 * [
 * ⁠   "1",
 * ⁠   "2",
 * ⁠   "Fizz",
 * ⁠   "4",
 * ⁠   "Buzz",
 * ⁠   "Fizz",
 * ⁠   "7",
 * ⁠   "8",
 * ⁠   "Fizz",
 * ⁠   "Buzz",
 * ⁠   "11",
 * ⁠   "Fizz",
 * ⁠   "13",
 * ⁠   "14",
 * ⁠   "FizzBuzz"
 * ]
 *
 *
 */

#include <iostream>
#include <vector>

using namespace std;

bool Fizz(int n) {
  if (n > 2)
    return (n % 3 == 0);
  else
    return false;
}
bool Buzz(int n) {
  if (n > 4)
    return (n % 5 == 0);
  else
    return false;
}
bool FizzBuzz(int n) { return (Fizz(n) && Buzz(n)); }

void Print(vector<string> v) {
  for (auto x : v) {
    cout << x << " ";
  }
}

class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    vector<string> solution;
    for (int i = 1; i <= n; i++) {
      if (FizzBuzz(i)) {
	solution.push_back("FizzBuzz");
      } else if (Fizz(i)) {
	solution.push_back("Fizz");
      } else if (Buzz(i)) {
	solution.push_back("Buzz");
      } else {
	solution.push_back(to_string(i));
      }
    }
    return solution;
  }
};

/*
int main() {
  Solution S;
  Print(S.fizzBuzz(15));
}
*/
