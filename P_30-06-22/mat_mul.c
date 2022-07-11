#include <stdio.h>


// Add 2 matrixes
void main() {
    int a[50][50] = {{0}}, b[50][50]= {{0}}, c[50][50]= {{0}};
    int ar = 0, ac = 0, br = 0, bc = 0;
    int i = 0, j = 0, k = 0;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &ar, &ac);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &br, &bc);
    if (ac != br) {
        printf("Error: The number of columns of matrix A must be equal to the number of rows of matrix B.\n");
        return;
    }
    // Set the result matrix rows and columns to the correct values
    printf("Enter the elements of matrix A: ");
    for (i = 0; i < ar; i++) {
        for (j = 0; j < ac; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix B: ");
    for (i = 0; i < br; i++) {
        for (j = 0; j < bc; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The result matrix is: \n");
    for (i = 0; i < ac; i++) {
        // Iterate over rows of B,
        for (j = 0; j < br; j++) {
            // Iterate over columns of A,
            c[i][j] = 0;
            for (k = 0; k < ac; k++) {
                // For every element in a column of A, Multiply the corresponding element in B by the element in A and add it to the result matrix.
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // Output matrix has ar row and bc cols 
    for (i = 0; i < ar; i++) {
        for (j = 0; j < bc; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}