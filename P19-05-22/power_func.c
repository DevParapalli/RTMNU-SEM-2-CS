#include <stdio.h>
#include <math.h>

long int power(int a, unsigned int b) {
    /* Raises A to B */
    long int res = 1;
    for(int i = 1; i <= b ; i++) {
        res *= a;
    }
    return res;
}

int main() {
    int a = 0;
    unsigned int b = 0;
    printf("Enter A,B >");
    scanf("%d,%u", &a, &b);
    printf("%d**%u = %li\n", a, b, power(a, b));
}

/*
Enter A,B >3,3
3**3 = 27
*/
