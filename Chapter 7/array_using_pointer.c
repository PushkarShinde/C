#include <stdio.h>

int main() {
    int marks[4]={98,90,89,83};
    int*ptr=&marks[0];

    for(int i=0;i<4;i++){
        printf("The marks of roll no. %d is: %d\n",i+1,marks[i]);
        printf("The marks of roll no. %d is: %d\n",i+1,*ptr);
        ptr++; 
    /*
    this is incrementing the pointer that is initialised to the first element 
    of that array and shifting it to the next one with every iteration!
    */
    }
    return 0;
}   