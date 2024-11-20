#include<stdio.h>
#include<stdlib.h> // Use <stdlib.h> instead of <alloc.h>

int main() {
    int **a, i, j, rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate a one-dimensional array of int pointers
    a = (int **)malloc(rows * sizeof(int *));
    if (a == NULL) {
        printf("Memory allocation failed for rows.\n");
        return 1;
    }

    // Allocate a one-dimensional array of integers for each row pointer
    for (i = 0; i < rows; i++) {
        a[i] = (int *)malloc(cols * sizeof(int));
        if (a[i] == NULL) {
            printf("Memory allocation failed for row %d.\n", i);
            // Free previously allocated rows
            for (int k = 0; k < i; k++) {
                free(a[k]);
            }
            free(a);
            return 1;
        }
    }

    // Input values into the 2D matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}