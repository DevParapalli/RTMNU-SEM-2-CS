#include <stdio.h>

int main() {
    int C, D, temp;
    printf("Enter two numbers (A,B)\n>");
    scanf("%d,%d", &C, &D);
    printf("[Before Swap] C=%d, D=%d\n", C, D);
    temp = C;
    C = D;
    D = temp;
    printf("[After Swap ] C=%d, D=%d\n", C, D);
    return 0;
}