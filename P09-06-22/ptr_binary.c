#include <stdio.h>

long long int binary(long long int decimal) {
  if (decimal == 0)
    return 0;
  if (decimal % 2 == 0)
    return (binary(decimal / 2) * 10 + 0);
  else 
    return (binary(decimal / 2) * 10 + 1);
}

void bin_repr(long long dec, long long int *repr) {
  *repr = binary(dec);
}

int main() { 
  long long deci, deci_bin_repr;
  printf("Enter Decimal Number >");
  scanf("%lli", &deci);
  bin_repr(deci, &deci_bin_repr);
  printf("%lli in binary is %lli\n", deci, deci_bin_repr);
  return 0; 
}