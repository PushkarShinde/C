#include <stdio.h>

int main() {
    int num, reverse=0, remainder;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    int originalnum=num;
    while(num!=0){
        remainder=num%10;
        reverse= reverse*10 + remainder;
        num=num/10;
    }
    if(originalnum==reverse){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
    return 0;
}