#include <stdio.h>

void insertion_sort(int *, int);
int init_array(int *);
void print_array(int[], int);

int main() {
    int array[100], len_arr;
    len_arr = init_array(array);

    printf("Before Sorting: ");
    print_array(array, len_arr);
    
    insertion_sort(array, len_arr);

    printf("After Sorting: ");
    print_array(array, len_arr);

    return 0;
}


void insertion_sort(int *array, int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
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

void print_array(int arr[], int len_arr) {
    for(int i = 0; i < len_arr; i++) {
        (i != 0) ? printf("-"):printf("");
        printf("%d", arr[i]);
    }
    printf("\n");
}

/*
Array Length :5 
Index 0 :65
Index 1 :76
Index 2 :38
Index 3 :43
Index 4 :09
Before Sorting: 65-76-38-43-9
After Sorting: 9-38-43-65-76
*/