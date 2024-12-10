// Write a program to convert a binary or octal number to a decimal number depending on user's choice. 

#include <stdio.h>

// todec(int num, int base){
    // int rem,d,j=1,dec=0;
    // while(num>0){
    //     rem=num%10; /*taking last digit*/
    //     d=rem*j;
    //     dec+=d;
    //     j*=base;
    //     num/=10; /*skipping last digit*/
    // }
    // return dec;
// }

// Recursive function to convert a number to decimal
int todec(int num, int base, int position) {
    if (num == 0) {
        return 0; // Base case: if the number is 0, its decimal equivalent is 0
    }
    
    int rem = num % 10; // Extract the last digit
    int partialDec = rem * position; // Calculate the value of the current digit
    return partialDec + todec(num / 10, base, position * base); // Recurse with the remaining digits
}

int main() {
    char op; int num,result, base;
    printf("Enter 'b' to convert binary to decimal and 'o' to convert octal to decimal.\n");
    scanf("%c",&op);
    printf("Enter the number: ");
    scanf("%d",&num);
    if(op=='o'){
        base =8;
    } else if(op=='b'){
        base =2;
    } else if(op!='b' || op!='o'){
        printf("Error: Please enter either 'o' or 'b' only.");
    }
    result = todec(num, base,1); // Initial position multiplier is 1
    printf("The deciimal of %d is: %d",num,result);
    return 0;
}