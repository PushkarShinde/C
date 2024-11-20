#include <stdio.h>

// Corrected strlen function
int strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {  // Loop through until null terminator
        i++;
    }
    return i;  // Return the number of characters excluding null terminator
}

// Corrected mystrcpy function
void mystrcpy(char target[], char source[]) {
    int i;
    for (i = 0; i <= strlen(source); i++) {  // Loop until the null terminator
        target[i] = source[i];
    }
}

int main() {
    char source[] = "Pushkar";
    char target[50];  // Target string has enough space to hold the source
    mystrcpy(target, source);  // Copy the source string into target
    printf("%s %s", source, target);  // Print both strings
    return 0;
}