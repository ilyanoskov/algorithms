/*
 * [155] Min Stack
 *
 * https://leetcode.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (31.96%)
 * Total Accepted:    196.6K
 * Total Submissions: 615.2K
 * Testcase Example:
 * '["MinStack","push","push","push","getMin","pop","top","getMin"]\n[[],[-2],[0],[-3],[],[],[],[]]'
 *
 *
 * Design a stack that supports push, pop, top, and retrieving the minimum
 * element in constant time.
 *
 *
 * push(x) -- Push element x onto stack.
 *
 *
 * pop() -- Removes the element on top of the stack.
 *
 *
 * top() -- Get the top element.
 *
 *
 * getMin() -- Retrieve the minimum element in the stack.
 *
 *
 *
 *
 * Example:
 *
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> Returns -3.
 * minStack.pop();
 * minStack.top();      --> Returns 0.
 * minStack.getMin();   --> Returns -2.
 *
 *
 */

#include <iostream>
#include <vector>

using namespace std;

class MinStack {
 private:
  vector<int> stack;
  vector<int> min_stack;

 public:
  /** initialize your data structure here. */
  void push(int x) {
    if (min_stack.size() == 0 || x <= min_stack.back()) {
      min_stack.push_back(x);
    }
    stack.push_back(x);
  }

  void pop() {
    int to_pop = stack.back();
    if (min_stack.back() == to_pop) {
      min_stack.pop_back();
    }
    stack.pop_back();
  }

  int top() { return stack.back(); }

  int getMin() { return min_stack.back(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

/*
int main() {
  MinStack S;
  S.push(1);
  S.push(2);
  S.push(2);

  S.pop();
  S.pop();

  cout << S.top();
}
*/
