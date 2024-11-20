#include <stdio.h>

int main() {
    int i=10;
    int*p1=&i;
    int**p2=&p1;
    printf("add i: %d\n",p1);
    printf("value i: %d\n",*p1);
    printf("value i: %d\n",**p2);

    return 0;
}