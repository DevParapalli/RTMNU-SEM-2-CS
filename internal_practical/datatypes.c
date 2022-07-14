#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int integer = 32, integer_array[5] = {1, 2, 3, 4, 5};
    float fp_num = 6.9, fp_array[5] = {1.0, 2.0, 3.0, 4.5, 9.3};
    double dp_num = 4.20; // double acts similarly to fp but has more precision (long float);
    char character = 'K', string[64] = "This is a string.\0";
    printf("INTEGER : %d", integer);
    printf("INTEGER ARRAY:");
    for(int i = 0; i < sizeof(integer_array)/sizeof(integer_array[0]); i++){
        i == 0 ? printf(""): printf("-");
        printf("%d", integer_array[i]);
    }

    printf("FLOAT: %f", fp_num);
    for(int i = 0; i < sizeof(fp_array)/sizeof(fp_array[0]); i++){
        i == 0 ? printf(""): printf("-");
        printf("%f", fp_array[i]);
    }

    printf("DOUBLE : %lf", dp_num);

    printf("CHAR : %c, ASCII: %d", character, character);
    printf("STRING : %s", string);
}