#include <stdio.h>
long long bin_repr(long long decimal) {
//  End cases for Last Bit
    if (decimal == 0) return 0;
    if (decimal == 1) return 1;
// Cases for all other chars
    if (decimal % 2 == 0) return (bin_repr(decimal / 2)*10 + 0);
    else return (bin_repr(decimal / 2)*10 + 1);
}

int main() {
    long long number = 0;
    printf("Enter Number:");
    scanf("%lli", &number);
    printf("Binary Representation of %lli is %lli\n", number, bin_repr(number));
    return 0;
}

/*
Enter Number:10
Binary Representation of 10 is 1010
*/
