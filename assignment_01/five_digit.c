#include <stdio.h>

int main() {
    long int num, num_copy, n=1;
    printf("Enter N: ");
    scanf("%ld", &num);
    int digit_count = 0;
    num_copy = num;
    while (num_copy > 0) {
        num_copy /= 10;
        digit_count++;
    }
    for (int i = 1; i < digit_count; i++) {
        n *= 10;
        n += 1;
    }
    num += n;
    printf("%ld\n", num);
    return 0;
}