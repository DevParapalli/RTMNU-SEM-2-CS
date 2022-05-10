#include <stdio.h>

int main() {
  int a, b, c, d, e;
  long int original, reverse;
  printf("Enter a 5-digit integer >");
  scanf("%li", &original);
  a = ((original / 10000) % 10);
  b = ((original / 1000) % 10);
  c = ((original / 100) % 10);
  d = ((original / 10) % 10);
  e = ((original / 1) % 10);

  reverse = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
  printf("Original: %li ; Reverse: %li\n", original, reverse);
  if (original == reverse)
    printf("integer is a palindrome\n");
  else
    printf("integer is not a palindrome\n");
}

/*
Enter a 5-digit integer >12321 
Original: 12321 ; Reverse: 12321
integer is a palindrome
*/