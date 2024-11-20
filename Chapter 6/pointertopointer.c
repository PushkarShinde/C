#include <stdio.h>

int main() {
    int i=24;
    int*j=&i;
    int**k=&j;
    printf("value i= %d\n",i);
    printf("value i= %d\n",*j);
    printf("value i= %d\n",*&i);
    printf("add j= %d\n",&j);
    printf("add i= %d\n",*(&j));
    printf("value i= %d\n",**(&j));
    return 0;
}