#include <stdio.h>

void calc(int a, int b,int  c,int  d,int  e, int *sum, float *avg) {
    *sum = a + b + c+ d + e;
    *avg = *sum / 5.0;
}


int main() {
    int A, B,C,D,E, int_sum;
    float int_average;
    printf("Enter A, B, C, D, E >");
    scanf("%d,%d,%d,%d,%d", &A, &B, &C, &D, &E);
    calc(A, B, C, D, E, &int_sum, &int_average);
    printf("Sum = %d, Average = %.2f\n", int_sum, int_average);
    return 0;
}