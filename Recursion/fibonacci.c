#include <stdio.h>

int fibonacci(int n){
    if(n==0 || n==1){
        return 1;
    } else{
        return fibonacci(n-1) +fibonacci(n-2);
    }
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    if(scanf("%d", &num) != 1 || num < 0) { // Adding check for negative numbers
        printf("Error: Please enter a non-negative integer.");
    }else{
        for(int i=0; i<num;i++){
            if(i==num-1){
                printf("%d.",fibonacci(i));
            } else{
                printf("%d, ",fibonacci(i));
            }
        }
    }
    return 0;
}