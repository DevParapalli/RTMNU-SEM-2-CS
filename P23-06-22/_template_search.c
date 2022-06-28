#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int searching_function(int*, int, int);
void sorting_function(int*, int);
int init_array(int*);
void print_array(int[], int);

int main() {
    int array[100], len_arr, search_element, result;

    len_arr = init_array(array);
    printf("Array of length %d initialized with random numbers.\n", len_arr);

    // Sorting Array using a sorting function
    sorting_function(array, len_arr);

    printf("Enter Search :");
    scanf("%d", &search_element);

    result = searching_function(array, len_arr, search_element);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    print_array(array, len_arr);
    return 0;
    }

void sorting_function(int* arr, int length) {
    /* ... */
    }

int searching_function(int* array, int size, int element) {
    /* ... */
    }

int init_array(int* arr) {
    // Seeding the RNG, causes reproducible results.
    srand(69420);
    int len_arr = MAX_LEN;
    for (int i = 0;i < len_arr; i++) {
        arr[i] = rand() % 50 + i;
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
