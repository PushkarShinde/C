#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[4]; // Pointer to the last element
    int *ptr2 = &arr[1]; // Pointer to the second element
    
    int difference = ptr1 - ptr2; // Subtracting the pointers
    printf("Difference between ptr1 and ptr2: %d\n", difference); // Output: 3

    return 0;
}
/*
When two pointers of the same type point to elements in the same array, 
their difference is the number of elements between them.
*/ 