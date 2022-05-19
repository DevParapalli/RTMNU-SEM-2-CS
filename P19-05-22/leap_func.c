#include <stdio.h>

int is_leap(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 != 0 && year % 4 == 0) return 1;
    return 0;
}

int main() {
    int y = 0;
    printf("Enter Year >");
    scanf("%d", &y);
    (is_leap(y)) ? printf("%d is leap year.\n", y):printf("%d is not leap year.\n", y);
    return 0;
}

/*
Enter Year >2013
2013 is not leap year.
Enter Year >2016
2016 is leap year.
*/
