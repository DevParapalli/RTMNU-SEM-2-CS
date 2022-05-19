#include <stdio.h>

#define MAX_MARKS 100

void calc(int a, int b, int c, int d, int e, float *avg, float *percent) {
  float average = (a + b + c + d + e) / (5.0);
  float percentage = average * 100.0 / MAX_MARKS;
  *avg = average;
  *percent = percentage; 
}

int main() {
    int a, b, c, d, e;
    float avg, percent;
    printf("Enter 5 Subject Marks\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    calc(a, b, c, d, e, &avg, &percent);
    printf("Average = %.2f ; Percentage = %.2f\n", avg, percent);
    return 0;
}

/*
Enter 5 Subject Marks
98
99
97
98
100
Average = 98.40 ; Percentage = 98.40
*/
