#include <stdio.h>

int sum_of_digits_no_recurse(long int x) {
    int sum = 0;
    while(x != 0) {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int main() {
    long int number = 0;
    printf("Enter Number:");
    scanf("%li", &number);
    printf("Sum of Digits of %li is %d\n", number, sum_of_digits_no_recurse(number));
    return 0;
}

/*
Enter Number:12540
Sum of Digits of 12540 is 12
*/
