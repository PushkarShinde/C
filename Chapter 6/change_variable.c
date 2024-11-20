#include <stdio.h>

void change_value(int*n){
    *n=*n*10;
    printf("%d",*n);
}

int main() {
    int a=10;
    printf("The new value of a is: ");
    change_value(&a);
    return 0;
}