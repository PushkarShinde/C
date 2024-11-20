#include <stdio.h>

struct vector{
    int i;
    int j;
} v;

int main() {
    v.i=10; v.j=20;
    printf("The value of vector is: %di+%dj",v.i,v.j);
    return 0;
}