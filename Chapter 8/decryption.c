#include <stdio.h>

// Corrected strlen function
int strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {  // Loop through until null terminator
        i++;
    }
    return i;  // Return the number of characters excluding null terminator
}

int main() {
    char str[] = "Nfsb!cibj!tbctf!bdib!ibj";
    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] - 1;  // Shift each character by 1 in the ASCII table
    }
    printf("%s", str);
    return 0;
}
