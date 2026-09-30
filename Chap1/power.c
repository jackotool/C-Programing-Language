/*  power 2026 Jack O'Toole 

*/

#include <stdio.h>

int power(int, int ); // base to the power of n

int main() {
    int base, n;
    base = 2;   
    n= 3;
    for (int i = 0; i < 5; i++) {
        printf("%d to the power of %d is %d\n", base, i, power(base, i));
    }

    //printf("%d to the power of %d is %d\n", base, n, power(base, n));
    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}