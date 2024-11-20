#include<stdio.h>
#include<stdlib.h> // Use <stdlib.h> instead of <alloc.h>, as <alloc.h> is non-standard.

int main() {
    int *a[3], i, j, cols;

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Initialize each pointer in the array with dynamically allocated memory
    for (i = 0; i < 3; i++) {
        a[i] = (int *)malloc(cols * sizeof(int));
        if (a[i] == NULL) { // Check if memory allocation was successful
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    // Input values into the 2D matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < 3; i++) {
        free(a[i]);
    }

    return 0;
}