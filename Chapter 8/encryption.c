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
    char str[] = "Mera bhai sabse acha hai!";
    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] + 1;  // Shift each character by 1 in the ASCII table
    }
    printf("%s", str);
    return 0;
}
/*
'A' has an ASCII value of 65, so str[i] + 1 would give you 'B' (ASCII value 66).
'a' has an ASCII value of 97, so str[i] + 1 would give you 'b' (ASCII value 98).
*/