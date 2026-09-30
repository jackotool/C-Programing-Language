/*  int_1 2026 Jack O'Toole
    simple use of integers with printf
  */

#include <stdio.h>

int main() {
    int fahr,celsius;
    int lower,upper,step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32)/9;    // 5 / 9 * (fhar- 32)   5/9 evaluates to 0 as an integer
        printf("%d\t%d\n",fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
}