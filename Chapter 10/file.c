#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file pointer variable to store the value returned by
    // fopen
    FILE* fptr;
    int num;
    // opening the file in read mode
    fptr = fopen("pushkar.txt", "r");

    // checking if the file is opened successfully
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "now exit.\n");
        exit(0);
    } else {
    /*
    Each call to fscanf(fptr, "%d", &num) reads the next integer from the file. 
    After reading one number, the file pointer moves forward to the position after that number. 
    Hence, subsequent calls to fscanf read different numbers from the file if multiple integers are stored sequentially.

        while (fscanf(fptr, "%d", &num) != EOF) {
            printf("The value of num is: %d\n", num);
        }
    */
    fscanf(fptr, "%d", &num);
    printf("The value of num is: %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("The value of num is: %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("The value of num is: %d\n", num);
    
    printf("The file was opened succesfully and closed!\n");
}
    fclose(fptr);
    return 0;
}
