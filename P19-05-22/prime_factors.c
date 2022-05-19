#include <stdio.h>


int is_prime(long int a) {
  for (long int j = 2; j < a; j++) {
    if (a % j == 0) {
      return 0;
    }
  }
  return 1;
}

void print_first_factor(long int num) {
    for(long int i = 2; i <= num;i++){
        if (num % i == 0) {
            if (is_prime(i)) {
                printf("%li\n", i);
                print_first_factor(num/i);
                return;
            }
            
        }
    }
}

int main() {
    long int original_num;
    printf("Enter Number for PF >");
    scanf("%li", &original_num);
    print_first_factor(original_num);
    return 0;
}

/*
Enter Number for PF >637
7
7
13
*/
