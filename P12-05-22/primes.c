#include <stdio.h>

int is_prime(int a) {
  int half_a = (a + 1);
  for (int j = 2; j < half_a; j++) {
    if (a % j == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  printf("1 is not prime");
  for (int i = 2; i <= 300; i++) {
    if (is_prime(i)) {
      printf(",%d", i);
    }
  }
  printf("/n")
}

/*
1 is not prime,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,
89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,
193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293
*/