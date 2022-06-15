#include <stdio.h>

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a, b;
  printf("Enter A, B >");
  scanf("%d,%d", &a, &b);
  printf("[Before Swap] A: %d B: %d\n", a, b);
  swap(&a, &b);
  printf("[After Swap] A: %d, B: %d\n", a, b);
  return 0;
}