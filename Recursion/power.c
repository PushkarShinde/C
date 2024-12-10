#include <stdio.h>

// Function to calculate power using recursion
int power(float n, int p) {
    if (p == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    } else {
        return n * power(n, p - 1); // Recursive case
    }
}

int main() {
    int p; float num;

    // Input the base number
    printf("Enter a number: ");
    if (scanf("%f", &num) != 1) { // Check for valid number input
        printf("Error: Please enter a decimal number only.\n");
        return 1; // Exit the program with an error
    }

    // Input the power
    printf("Enter the power: ");
    if (scanf("%d", &p) != 1 || p < 0) { // Check for valid non-negative integer input
        printf("Error: Please enter a non-negative integer for the power.\n");
        return 1; // Exit the program with an error
    }

    // Calculate and display the result
    printf("The %dth power of %f is: %d\n", p, num, power(num, p));
    return 0;
}
