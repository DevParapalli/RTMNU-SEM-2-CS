#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int binary_search(int*, int, int, int);
void selection_sort(int*, int);
int init_array(int*);
void print_array(int[], int);

int main() {
    int array[100], len_arr, search_element, result;

    len_arr = init_array(array);
    printf("Array of length %d initialized with random numbers.\n", len_arr);

    // Sorting Array using Selection Sort
    selection_sort(array, len_arr);

    printf("Enter Search :");
    scanf("%d", &search_element);

    result = binary_search(array, search_element, 0, len_arr);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    print_array(array, len_arr);
    return 0;
    }

void selection_sort(int* arr, int length) {
    int i, j, min_index, temp;
    for (i = 0; i < length; i++) {
        min_index = i;
        for (j = i + 1; j < length; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
                }
            }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        }
    }



int binary_search(int* array, int element, int start, int stop) {
    while (start <= stop) {
        // Find Middle Point
        int mid = (start + stop) / 2;
        // Compare Middle to Element
        if (array[mid] == element) {
            // If same, return mid
            return mid;
            }
        else if (array[mid] < element) {
            // If element is greater, search right half
            start = mid + 1;
            }
        else {
            // If element is less, search left half
            stop = mid - 1;
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
Enter Search :27
Element found at index 6
13-16-19-19-23-25-27-28-29-36-38-38-41-44-45-45-45-47-48-56
*/