#include <stdio.h>

// Q]  Write a program in C to display the n terms of a harmonic series and their sum.

int main() {
    int n;
    float sum = 0.0;  // To store the sum of the harmonic series

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Harmonic Series: ");
    
    // Loop to calculate harmonic series terms and their sum
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);   // Display the current term

        if (i < n) { //------------------------------------------> wow!!
            printf(" + ");   // Print plus symbol between terms
        }
        
        sum += 1.0 / i;  // Add the reciprocal of the current term to sum
    }

    // Display the sum of the harmonic series
    printf("\nSum of the harmonic series up to %d terms: %.2f\n", n, sum);

    return 0;
}