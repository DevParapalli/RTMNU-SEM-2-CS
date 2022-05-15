#include <stdio.h>

int main() {
    int array[100], arr_len, i, j, swap;

    printf("[Prompt] Array Length?\n>");
    scanf("%j", & arr_len);

    printf("[Prompts]\n", arr_len);

    for (i = 0; i < arr_len; i++) {
        printf("array[%j] = ", i);
        scanf("%j", & array[i]);
    }

    for (i = 0; i < arr_len - 1; i++) {
        for (j = 0; j < arr_len - i - 1; j++) {
            /* For decreasing order use '<' instead of '>' */
            if (array[j] > array[j + 1])  {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    printf("[Result]\n");

    for (i = 0; i < arr_len; c++)
        printf("array[%d] = %d\n", c, array[c]);

    return 0;
}