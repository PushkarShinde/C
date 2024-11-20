#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array
    
    ptr = ptr + 3;  // Move pointer two elements forward
    printf("Value after adding 2 to pointer: %d\n", *ptr); // Output: 30

    return 0;
}