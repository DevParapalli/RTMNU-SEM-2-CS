#include <stdio.h>

void bubble_sort(int *, int);
int init_array(int[]);
void print_array(int[], int);

int main() {
    int array[100], len_arr;
    len_arr = init_array(array);

    printf("Before Sorting: ");
    print_array(array, len_arr);
    
    bubble_sort(array, len_arr);

    printf("After Sorting: ");
    print_array(array, len_arr);

    return 0;
}


void bubble_sort(int *array, int size) {\
  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
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
Index 0 :45
Index 1 :24
Index 2 :75
Index 3 :32
Index 4 :86
Before Sorting: 45-24-75-32-86
After Sorting: 24-32-45-75-86
*/