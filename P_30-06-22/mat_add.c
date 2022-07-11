#include <stdio.h>


// Add 2 matrixes
void main() {
    int a[50][50], b[50][50], c[50][50];
    int ar, ac, br, bc, cr, cc;
    int i, j, k;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &ar, &ac);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &br, &bc);
    // Set the result matrix rows and comumns to max
    cc = (ac > bc) ? ac : bc;
    cr = (ar > br) ? ar : br;
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
    for (i = 0; i < cr; i++) {
        for (j = 0; j < cc; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

}