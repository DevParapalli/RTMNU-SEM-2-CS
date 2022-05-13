#include <stdio.h>

int main() {
  long long int res = 1;
  int num = 0;
  printf("Enter Number >");
  scanf("%d", &num);
  if (num < 0) {
    printf("-ve Number Not Supported.");
    return 0;
  }
  if (num == 1) {
    printf("1\n");
    return 0;
  }
  for (int i = num; i >= 1; i--) {
    res *= i;
  }
  printf("%lli\n", res);
}

/*
Enter Number >6
720
*/