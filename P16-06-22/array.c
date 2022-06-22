#include <stdio.h>

void print_array(int arr[], int len_arr) {
    for(int i = 0; i < len_arr; i++) {
        (i != 0) ? printf("-"):printf("");
        printf("%d", arr[i]);
    }
    printf("\n");
}

void get_index_and_value(int *index, int * value) {
    printf("Index :");
    scanf("%d", &(*index));
    printf("Value :");
    scanf("%d", &(*value));
}

void get_index(int *index) {
    printf("Index :");
    scanf("%d", &(*index));
}

int init_array(int *arr) {
    int len_arr = 0;
    printf("Array Length :");
    scanf("%d", &len_arr);
    for(int i = 0;i < len_arr; i++) {
        printf("Index %d :", i);
        scanf("%d", &arr[i]);
    }
    return len_arr;
}

void insert_element(int *arr, int *arr_len, int index, int value) {
    if(index > *arr_len) {
        printf("Invalid Index\n");
        return;
    }
    for(int i = (*arr_len); i > index; i--) {
        arr[i] = arr[i - 1];
    }
    // Update Length
    (*arr_len)++;
    // Add the element
    arr[index] = value;
}

void remove_element(int *arr, int *arr_len, int index) {
    if(index > *arr_len) {
        printf("Invalid Index\n");
        return;
    }
    int _temp = arr[index];
    for(int i = index; i < *arr_len; i++) {
        arr[i] = arr[i + 1];
    }
    (*arr_len)--;
    printf("Value Removed : %d\n", _temp);
}

int main() {
    int arr[100] = {0};
    int len_arr = 0;
    int working_index = 0;
    int working_value = 0;

    len_arr = init_array(arr);
    print_array(arr, len_arr);
    
    printf("[Insert] \n");
    get_index_and_value(&working_index, &working_value);
    insert_element(arr, &len_arr, working_index, working_value);
    print_array(arr, len_arr);

    printf("[Remove] \n");
    get_index(&working_index);
    remove_element(arr, &len_arr, working_index);
    print_array(arr, len_arr);

    return 0;
}

/*
Array Length :5 
Index 0 :1
Index 1 :2
Index 2 :3
Index 3 :4
Index 4 :5
1-2-3-4-5
[Insert] 
Index :3
Value :8
1-2-3-8-4-5
[Remove] 
Index :2
Value Removed : 3
1-2-8-4-5
*/