#include <stdio.h>

int main() {
    int a=5;
    int *ptr=&a;
    printf("The address of a is: %u\n",&a);
    printf("The address of a is: %u\n",ptr);
    ptr++; // the value of ptr will get incremented same as the amount of bytes assigned to the 'data type' of that pointer.
    // in this case +4.
    printf("New value of ptr is: %u\n",ptr);

    return 0;
}