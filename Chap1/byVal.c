/*  Call by Value 2026 Jack O'Toole 

*/

#include <stdio.h>
int power(int m, int n);

int main() {
    int base, n;
    base = 2;
    n= 3;
    printf("%d to the power of %d is %d\n", base, n, power(base, n));
    return 0;
}

int power(int base, int n) {
    int  p;
    
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}