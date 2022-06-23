#include <stdio.h>

void selection_sort(int *, int);
int init_array(int *);
void print_array(int[], int);

int main() {
    int array[100], len_arr;
    len_arr = init_array(array);

    printf("Before Sorting: ");
    print_array(array, len_arr);
    
    selection_sort(array, len_arr);

    printf("After Sorting: ");
    print_array(array, len_arr);

    return 0;
}


void selection_sort(int * array, int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    int temp = array[step];
    array[step] = array[min_idx];
    array[min_idx] = temp;
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
Array Length :6
Index 0 :87
Index 1 :45
Index 2 :3
Index 3 :067
Index 4 :54
Index 5 :31
Before Sorting: 87-45-3-67-54-31
After Sorting: 3-31-45-54-67-87
*/