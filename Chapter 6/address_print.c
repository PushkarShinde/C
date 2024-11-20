#include <stdio.h>

int main() {
    int a=10;
    int*b=&a;
    printf("The address of a is: %p\n",&a);
    printf("The value at a is: %d\n",*b);
    return 0;
}