//  Write a program to modify a file containing an integer to double its value

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num;

    // Open the file in read mode
    fptr = fopen("int.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read the integer from the file
    if (fscanf(fptr, "%d", &num) != 1) {
        printf("Error: Could not read integer from file.\n");
        fclose(fptr);
        return 1;
    }
    fclose(fptr); // Close the file after reading

    // Double the number
    num *= 2;

    // Open the file in write mode
    fptr = fopen("int.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Write the modified value back to the file
    fprintf(fptr, "%d", num);
    fclose(fptr); // Close the file after writing

    printf("The value in the file has been doubled successfully.\n");
    return 0;
}
