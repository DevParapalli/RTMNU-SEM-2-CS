#include <stdio.h>

int main() {
  int sp, cp;
  printf("Enter Cost Price: ");
  scanf("%d", &cp);
  printf("Enter Selling Price: ");
  scanf("%d", &sp);

  if (cp >= sp)
    printf("Seller suffered loss, Amount: %d", cp - sp);
  else
    printf("Seller made profit, Amount %d", sp - cp);
  return 0;
}

/*
Enter Cost Price: 3200
Enter Selling Price: 3500
Seller made profit, Amount 300
*/