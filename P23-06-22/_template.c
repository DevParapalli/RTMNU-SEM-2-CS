#include <stdio.h>

void sorting_function(int*, int);
int init_array(int*);
void print_array(int[], int);

int main() {
    int array[100], len_arr;
    len_arr = init_array(array);

    printf("Before Sorting: ");
    print_array(array, len_arr);

    sorting_function(array, len_arr);

    printf("After Sorting: ");
    print_array(array, len_arr);

    return 0;
    }


void sorting_function(int* array, int size) {
    /* ... */
    }

int init_array(int* arr) {
    int len_arr = 0;
    printf("Array Length :");
    scanf("%d", &len_arr);
    for (int i = 0;i < len_arr; i++) {
        printf("Index %d :", i);
        scanf("%d", &arr[i]);
        }
    return len_arr;
    }

void print_array(int arr[], int len_arr) {
    for (int i = 0; i < len_arr; i++) {
        (i != 0) ? printf("-") : printf("");
        printf("%d", arr[i]);
        }
    printf("\n");
    }
