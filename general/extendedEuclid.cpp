#include <iostream>

using namespace std;

// this is an extended algorithm to find
// ax + by = c
// x and y
int x1 = 1;
int y1 = 0;

int x2 = 0;
int y2 = 0;

int gcd(int a, int b) {
    while (a != b)
        if (a > b) {
            a = a - b;
            x1 = x1 - x2;
            y1 = y1 - y2;
        } else {
            b = b - a;
            x2 = x2 - x1;
            y2 = y2 - y1;
        }
    return a;
}

int main() { return 0; }
