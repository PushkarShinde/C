#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main() {
    int x=1, y=2;
    printf("The sum is: %d",sum(x,y));
    // printf("The sum is: %d",sum(1,2));
    return 0;
}