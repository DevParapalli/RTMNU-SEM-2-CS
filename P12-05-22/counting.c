#include <stdio.h>

int main() {
  // User response is yes initially.
  int user_response = 1;
  int count_p = 0;
  int count_n = 0;
  int count_0 = 0;
  while (user_response == 1) {
    int i = 0;
    printf("Enter Number >");
    scanf("%d", &i);
    if (i > 0)
      count_p++;
    if (i < 0)
      count_n++;
    if (i == 0)
      count_0++;
    printf("Continue ? (0 for No,1 for Yes) >");
    scanf("%d", &user_response);
  }
  printf("Positive: %d\nNegative: %d\nZero: %d\n", count_p, count_n, count_0);
}

/*
Enter Number >4
Continue ? (0 for No,1 for Yes) >1
Enter Number >-3
Continue ? (0 for No,1 for Yes) >1
Enter Number >3
Continue ? (0 for No,1 for Yes) >0
Positive: 2
Negative: 1
Zero: 0
*/