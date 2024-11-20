#include <stdio.h>

int main() {
    int five[10];
    for (int i = 0; i <10; i++)
    {
        five[i]= (i+1)*5;
    }
    for (int i = 0; i <10; i++)
    {
        printf("5 x %d = %d\n",i+1,five[i]);
    }

    return 0;
}