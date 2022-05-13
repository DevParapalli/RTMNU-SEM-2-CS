#include <stdio.h>

int main() {
    long int res = 1;
    int a = 0;
    int b = 0;
    printf("Enter A,B >");
    scanf("%d,%d", &a, &b);
    for(int i = 1; i <= b ; i++) {
        res *= a;
    }
    printf("%d**%d = %li\n", a, b, res);
}

/*
Enter A,B >3,3
3**3 = 27
*/