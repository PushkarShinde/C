#include <stdio.h>

int main() {
    double num = 13423.34324;
    printf("enter a real number: ");
    scanf("%lf",&num);
    printf("The number in exponent form id: %e\n",num);
    printf("The number in exponent form id: %E\n",num);

// type casting!!
    // int a;
    // char b= 'e';
    // printf("%d", (int)b); 
    
    return 0;
}