#include <stdio.h>

int main() {
    int array[100], rem_pos, c, arr_len, value;
    printf("[Prompt] Array Length?\n>");
    scanf("%d", & arr_len);

    printf("[Prompts]\n", arr_len);

    for (c = 0; c < arr_len; c++) {
        printf("array[%d] = ", c);
        scanf("%d", & array[c]);
    }

    printf("[Prompt] Remove Index?\n>");
    scanf("%d", & rem_pos);

    // We do not need the item at rem_pos, we simply shift all elements to the left
    for (c = rem_pos; c < arr_len; c++) {
        array[c] = array[c + 1];
    }
    // Decrement length of array to mark as deleted.
    arr_len--;

    printf("[Result]\n");

    for (c = 0; c < arr_len; c++)
        printf("array[%d] = %d\n", c, array[c]);

    return 0;
}

/*
[Prompt] Array Length?
>4
[Prompts]
array[0] = 1
array[1] = 2
array[2] = 3
array[3] = 4
[Prompt] Remove Index?
>2
[Result]
array[0] = 1
array[1] = 2
array[2] = 4
*/