#include <stdio.h>

int fibonacci(int x){
    if (x==1){
        return 0;
    } 
    else if(x==2) {
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The value of the fibonacci series at %dth term is: %d",num,fibonacci(num));
    return 0;
}