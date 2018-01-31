#include <iostream>

using namespace std;

int main() {
    int a[99];
    int na;
    int b[99];
    int nb;
    int c[99];
    int n;
    // given values: a,na,b,nb
    if (na < nb)  // alignment
    {
        n = nb;
        for (int i = na; i <= nb; i++) a[i] = 0;
    } else {
        n = na;
        for (int i = nb; i <= na; i++) b[i] = 0;
    }
    int t = 0;  // carry
    for (int i = 0; i <= n; i++) {
        c[i] = a[i] + b[i] + t;
        t = 0;
        if (c[i] > 10) {
            t = 1;
            c[i] = c[i] - 10;
        }
    }
    return 0;
}
