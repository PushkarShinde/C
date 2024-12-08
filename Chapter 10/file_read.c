#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char str1[50], str2[50], str3[50];
    int year;
    char c;
    char buffer[100];

    // Open file in read mode
    fptr = fopen("pushkar.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read formatted data using fscanf()
    fscanf(fptr, "%s %s %s %d", str1, str2, str3, &year);
    printf("fscanf read: %s %s %s %d\n", str1, str2, str3, year);

    // Read a single character using fgetc()
    c = fgetc(fptr);
    printf("fgetc read: %c\n", c);

    // Read a line using fgets()
    fgets(buffer, sizeof(buffer), fptr);
    printf("fgets read: %s", buffer);

    // Close the file
    fclose(fptr);
    return 0;
}
