//Write a program to read three integers from a file.
#include <stdio.h>

int main() {
    FILE*ptr;
    int n1,n2,n3;
    ptr=fopen("file.txt","r");
    fscanf(ptr,"%d %d %d",&n1,&n2,&n3);
    printf("The birthday of Pushkar is on: %d-%d-%d",n1,n2,n3);
    fclose(ptr);
    return 0;
}