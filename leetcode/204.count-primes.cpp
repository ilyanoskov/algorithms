/*
 * [204] Count Primes
 *
 * https://leetcode.com/problems/count-primes/description/
 *
 * algorithms
 * Easy (26.66%)
 * Total Accepted:    162.2K
 * Total Submissions: 608.4K
 * Testcase Example:  '10'
 *
 * Count the number of prime numbers less than a non-negative number, n.
 *
 * Example:
 *
 *
 * Input: 10
 * Output: 4
 * Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
 *
 *
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int countPrimes(int n) {
    if (n <= 2) return 0;
    if (n > 2) {
      bool sieve[n + 1];
      memset(sieve, true, sizeof(sieve));

      for (int p = 2; p * p <= n; p++) {
	if (sieve[p] == true) {
	  for (int i = p * 2; i <= n; i += p) sieve[i] = false;
	}
      }

      int counter = 0;
      for (int i = 2; i < n; i++) {
	if (sieve[i] == true) counter++;
      }
      return counter;
    }
  }
};

/*
int main() {
  Solution S;
  cout << S.countPrimes(10);
}
*/
