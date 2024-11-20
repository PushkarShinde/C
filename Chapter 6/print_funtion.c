#include <stdio.h>

void returning(int*p){
    printf("The value of p is %d\n",p);
    printf("The value at p is %d\n",*p);
}

int main() {
    int i=10;
    int*p=&i;
    printf("The address of i is %u\n",&i);
    returning(p);
    return 0;
}