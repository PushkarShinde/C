#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;

    // Open file in write mode
    fptr = fopen("pushkar.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Using different write functions
    fprintf(fptr, "%s %s %d\n", "Hello,", "World!", 2024);
    fputs("This is a line written by fputs.\n", fptr);
    fputc('A', fptr);
    // fputw(1234, fptr); Not supported in new compilers.

    fclose(fptr);
    printf("Data written to file successfully!\n");
    return 0;
}
