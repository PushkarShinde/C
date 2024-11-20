#include <stdio.h>

int main() {
    char a='A';
    char*b=&a;
    float k=34.5;
    float*k1=&k;
    printf("The address of a is: %p\n",b);
    printf("The address of k is: %p\n",k1);
    return 0;
}