#include <stdio.h>

long long fibonacci(long long x) { 
    if (x <= 0) return 0;
    if (x == 1) return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
} 

int main() {
    for(int i = 0; i < 25; i++) {
        printf("%lli", fibonacci(i));
        if(i != 24) printf("-");
    }
    printf("\n");
    return 0;
}

/*
0-1-1-2-3-5-8-13-21-34-55-89-144-233-377-610-987-1597-2584-4181-6765-10946-17711-28657-46368
*/
