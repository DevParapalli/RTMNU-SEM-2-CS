#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Enter A and B:");
    scanf("%d,%d", &a, &b);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %f\n", a / b);
    printf("A MOD B %d\n", a % b);
    printf("B MOD A %d\n", b % a);

    printf("is A == B ? %d\n", a == b);
    printf("is A != B ? %d\n", a != b);
    printf("is A >  B ? %d\n", a > b);
    printf("is A <  B ? %d\n", a < b);
    printf("is A >= B ? %d\n", a >= b);
    printf("is A <=  B ? %d\n", a <= b);

    printf("A AND B = %d\n", a && b);
    printf("A OR B %d\n", a || b);
    printf("NOT A %d\nNOT B %d\n", !a, !b);
    return 0;
}