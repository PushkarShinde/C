#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;     // Get the last digit
        reverse = reverse * 10 + remainder; // Append the last digit to reverse
        num = num / 10;           // Remove the last digit from num
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}