#include <stdio.h>

int main() {
    int age_a, age_b, age_c;
    printf("Enter the ages of A,B,C >");
    scanf("%d,%d,%d", &age_a, &age_b, &age_c);
    if (age_a < age_b && age_a < age_c) printf("A is the youngest.\n");
    if (age_b < age_a && age_b < age_c) printf("B is the youngest.\n");
    if (age_c < age_b && age_c < age_a) printf("C is the youngest.\n");
    return 0;
}

/*
Enter the ages of A,B,C >12,3,13
B is the youngest.
*/