#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int linear_search(int*, int, int);
int init_array(int*);
void print_array(int[], int);

int main() {
    int array[100], len_arr, search_element, result;

    len_arr = init_array(array);
    printf("Array of length %d initialized with random numbers.\n", len_arr);

    printf("Enter Search :");
    scanf("%d", &search_element);

    result = linear_search(array, len_arr, search_element);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    printf("[DEBUG] ARRAY \n");
    print_array(array, len_arr);
    return 0;
    }


int linear_search(int* array, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
            }
        }
    return -1;
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

/*
Array of length 20 initialized with random numbers.
Enter Search :13
Element found at index 1
[DEBUG] ARRAY ->
27-13-45-25-29-48-28-38-16-41-19-38-36-45-47-44-23-56-45-19
*/