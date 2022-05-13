#include <stdio.h>

int main() {
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if (year % 400 == 0) printf("Leap Year\n");
    if (year % 100 != 0 && year % 4 == 0) printf("Leap Year\n");
    else printf("Not a Leap Year\n");
    return 0;
}

/*
Enter Year: 2016
Leap Year
*/