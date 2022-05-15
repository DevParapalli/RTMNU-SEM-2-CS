#include <stdio.h>

int main() {
  int small, large, range, num, limit;

  printf("Enter Number of Numbers >");
  scanf("%d", &limit);

  printf("Enter %d numbers\n", limit);
  scanf("%d", &num);

  small = large = num;
  // Re-adjusting limit to count down to 0.
  limit = limit - 1;

  while (limit) {
    scanf("%d", &num);

    if (num > large) {
      large = num;
    }

    if (num < small) {
      small = num;
    }

    limit--;
  }

  range = large - small;

  printf("Smallest = %d\nLargest = %d\n", small, large);
  printf("Range is %d\n", range);

  return 0;
}

/*
Enter Number of Numbers >5
Enter 5 numbers
1
7
3
5
8
Smallest = 1
Largest = 8
Range is 7
*/
