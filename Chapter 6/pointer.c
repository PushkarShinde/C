#include <stdio.h>

int main() {
    int i=34; // now this integer is stored in my RAM at an address 
    int*j=&i; // j is an integer pointer, pointing to i
    int k=24;
    printf("The address of i is: %p\n",&i); // print the memory address of i in hexadecimal
    // use of %p is a recommended practice
    printf("The address of i is: %u\n",&i); // print the memory address in decimal integer
    printf("The address of i is: %p\n",j); // print the memory address of i, but through pointer j.
    printf("The address of i is: %u\n",&k); // this variable is stored in a different memory address.
    printf("The address of i is: %p\n",&k); 
    
    return 0;
}

/*
%u doesn't work correctly in architectures 
where pointer size is high (eg. 64 bit systems).
*/