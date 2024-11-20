#include <stdio.h>

char* slice(char str[], int m, int n) {
    static char slicedStr[100]; // create a new array to store the sliced string.
    int i, j = 0;
    // Copy characters from index m to n-1 into the slicedStr array.
    for (i = m; i < n && str[i] != '\0'; i++) {
        slicedStr[j] = str[i];
        j++;
    }
    slicedStr[j] = '\0'; // Null-terminate the string.
    return slicedStr;
}

int main() {
    char str[] = "Kanchan Shinde";
    printf("%s", slice(str, 4, 11)); // Should output "han Shi".
    return 0;
}