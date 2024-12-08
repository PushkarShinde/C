#include <stdio.h>
#include <string.h>

int main() {
    char name[]="Pushkar Shinde";
    printf("The name of the owner is: ");
    for(int i=0; i<strlen(name);i++){
        //This code is dangerous because the string functions return data in type size_t and not int.
        // We are comparing an int data type with size_t type which is dangerous.
        // Though the code will run smooth, but To avoid it, we must use size_t for i.
    }

    for(size_t i; i<strlen(name); i++){
        printf("%c",name[i]);
        // printf("\n%s",name);
        printf("(%zu) ",i);
    }
    return 0;
}