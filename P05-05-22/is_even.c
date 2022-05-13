#include <stdio.h>

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even\n"):printf("Odd\n");
    return 0;
}

/*
Enter Number: 43
Odd
*/
