#include <stdio.h>

int main() {
    int i=10, j=20;
    int*p=&i;
    int *q=&j;
    *p=*q; // the value pointed by pointer p changes to that pointed by pointer q.
    printf("%d\n",*p);
    printf("%d\n",*q);
    return 0;
}