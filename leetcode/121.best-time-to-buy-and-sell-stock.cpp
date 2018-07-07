/*
 * [121] Best Time to Buy and Sell Stock
 *
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
 *
 * algorithms
 * Easy (43.54%)
 * Total Accepted:    311.5K
 * Total Submissions: 715.4K
 * Testcase Example:  '[7,1,5,3,6,4]'
 *
 * Say you have an array for which the ith element is the price of a given
 * stock on day i.
 *
 * If you were only permitted to complete at most one transaction (i.e., buy
 * one and sell one share of the stock), design an algorithm to find the
 * maximum profit.
 *
 * Note that you cannot sell a stock before you buy one.
 *
 * Example 1:
 *
 *
 * Input: [7,1,5,3,6,4]
 * Output: 5
 * Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit
 * = 6-1 = 5.
 * Not 7-1 = 6, as selling price needs to be larger than buying price.
 *
 *
 * Example 2:
 *
 *
 * Input: [7,6,4,3,1]
 * Output: 0
 * Explanation: In this case, no transaction is done, i.e. max profit = 0.
 *
 *
 */
#include <cmath>
#include <vector>
using namespace std;

class Solution {
  public:
	int maxProfit(vector<int>& prices) {
		int size = prices.size();
		vector<int> dp;
		dp.push_back(0);
		dp.push_back(0);

		int mini;

		if (size > 1) {
			if (prices[0] < prices[1]) {
				dp.push_back(prices[1] - prices[0]);
			} else {
				dp.push_back(0);
			}
			mini = min(prices[1], prices[0]);
		}

		for (int i = 2; i < size; i++) {
			dp.push_back(max(dp.back(), prices[i] - mini));
			mini = min(mini, prices[i]);
		}

		return dp[size];
	}
};
