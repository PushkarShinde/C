#include <stdio.h>

int factorial(int num){
    if(num ==0 || num ==1){
        return 1;
    } else{
        return num * factorial(num -1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    if(scanf("%d", &num) != 1 || num < 0) { // Adding check for negative numbers
        printf("Error: Please enter a non-negative integer.");
    }else{
        printf("The factorial of %d is: %d",num,factorial(num));
    }
    return 0;
}