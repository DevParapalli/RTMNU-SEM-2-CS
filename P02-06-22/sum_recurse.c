#include <stdio.h>

int sum_of_digits_recurse(long int x) {
    if(x == 0) {
        return 0;
    }
    int last_digit = x % 10;
    return last_digit + sum_of_digits_recurse(x/10); 
    }

int main() {
    long int number = 0;
    printf("Enter Number:");
    scanf("%li", &number);
    printf("Sum of Digits of %li is %d\n", number, sum_of_digits_recurse(number));
    return 0;
}

/*
Enter Number:12345
Sum of Digits of 12345 is 15
*/
