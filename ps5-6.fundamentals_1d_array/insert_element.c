#include <stdio.h>

int main() {
    int array[100], ins_pos, c, arr_len, value;
    printf("[Prompt] Array Length?\n>");
    scanf("%d", & arr_len);

    printf("[Prompts]\n", arr_len);

    for (c = 0; c < arr_len; c++) {
        printf("array[%d] = ", c);
        scanf("%d", & array[c]);
    }

    printf("[Prompt] New Index?\n>");
    scanf("%d", & ins_pos);

    printf("[Prompt] New Value?\n>");
    scanf("%d", & value);

    // Shift elements after ins_pos to i+1 
    // c > ins_pos - 1 -> we shift the element at ins_pos to ins_pos + 1 as well. 
    // Decrement until c = ins_pos
    for (c = arr_len - 1; c > ins_pos - 1; c--)
        array[c + 1] = array[c];

    // Insert element at ins_pos
    array[ins_pos] = value;
    // Increment arr_len to show that we added element.
    arr_len++;

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
[Prompt] New Index?
>2
[Prompt] New Value?
>8
[Result]
array[0] = 1
array[1] = 2
array[2] = 8
array[3] = 3
array[4] = 4
*/