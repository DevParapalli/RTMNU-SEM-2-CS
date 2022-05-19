#include <stdio.h>

float product(int i, float f) {
    return (i * f);
}

void main() {
    int i = 0;
    float f = 0.0;
    printf("Enter Integer >");
    scanf("%d", &i);
    printf("Enter Float >");
    scanf("%f", &f);
    printf("%f", product(i, f));
}

/*
Enter Integer >6
Enter Float >0.5
3.000000
*/
