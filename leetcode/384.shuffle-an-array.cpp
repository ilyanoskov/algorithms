/*
 * [384] Shuffle an Array
 *
 * https://leetcode.com/problems/shuffle-an-array/description/
 *
 * algorithms
 * Medium (47.45%)
 * Total Accepted:    45.5K
 * Total Submissions: 95.8K
 * Testcase Example:
 * '["Solution","shuffle","reset","shuffle"]\n[[[1,2,3]],[],[],[]]'
 *
 * Shuffle a set of numbers without duplicates.
 *
 *
 * Example:
 *
 * // Init an array with set 1, 2, and 3.
 * int[] nums = {1,2,3};
 * Solution solution = new Solution(nums);
 *
 * // Shuffle the array [1,2,3] and return its result. Any permutation of
 * [1,2,3] must equally likely to be returned.
 * solution.shuffle();
 *
 * // Resets the array back to its original configuration [1,2,3].
 * solution.reset();
 *
 * // Returns the random shuffling of array [1,2,3].
 * solution.shuffle();
 *
 *
 */

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int getRandom(int n) { return rand() % n; }

class Solution {
 public:
  vector<int> original;
  vector<int> current;

  Solution(vector<int> nums) {
    srand(time(NULL));
    original = nums;
    current = nums;
  }

  /** Resets the array to its original configuration and return it. */
  vector<int> reset() { return original; }

  /** Returns a random shuffling of the array. */
  vector<int> shuffle() {
    int size = original.size();
    for (int i = 0; i < size; i++) {
      swap(current[i], current[getRandom(size)]);
    }
    return current;
  }
};

void Print(vector<int> nums) {
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << "\n";
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
