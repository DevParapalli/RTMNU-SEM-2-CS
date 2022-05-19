#include <stdio.h>

#define MAX_DEPTH 1000

long long int r_factorial(long long int a, int depth) {
    if (depth >= MAX_DEPTH) {
        printf("MAX_DEPTH Reached. Terminating\n");
        return 0;
    }
    if (a == 0) return 0;
    if (a == 1) return 1;

    return a*r_factorial(a-1, depth+1);
}

int main() {
    long long int num = 0;
    printf("Enter Number >");
    scanf("%lli", &num);
    printf("Factorial of %lli = %lli\n", num, r_factorial(num, 0));
}

/*
Enter Number >13
Factorial of 13 = 6227020800
*/
