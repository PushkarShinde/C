#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4]; // Pointer to the last element of the array
    
    ptr = ptr - 3;  // Move pointer three elements backward
    printf("Value after subtracting 3 from pointer: %d\n", *ptr); // Output: 20

    return 0;
}
