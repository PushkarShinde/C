#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[2]; // Pointer to the third element
    int *ptr2 = &arr[4]; // Pointer to the last element
    
    if (ptr1 < ptr2) {
        printf("ptr1 is before ptr2\n");  // This will be printed
    } else {
        printf("ptr1 is after or equal to ptr2\n");
    }

    return 0;
}
// Pointers can be compared using relational operators (==, !=, <, >, etc.)