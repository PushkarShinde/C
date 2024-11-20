#include <stdio.h>

int factorial(int x) { 
int f; 
if (x == 0 || x == 1) { 
return 1; // a program to calculate factorial using recursion 
} else { 
f = x * factorial(x - 1); // here it is calling itself!
return f; 
} 
}

int main() {
    int a=4;
    printf("The facorial is: %d",factorial(a));
    return 0;
}