#include <stdio.h>

int main() {
    long int n;
    printf("Enter number\n>");
    scanf("%li", &n);
    printf("SUM = %d\n", (n/10000)%10+((n/1000)%10)+((n/100)%10)+((n/10)%10)+((n/1)%10));
    return 0;
}