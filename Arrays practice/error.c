#include <stdio.h>

int fun(int x){
    int i=10;
    return &i; // not valid.
} 
/*
As soon as the function ends compiling,
the local variables are destroyed, thus avoid 
using its address, as it doesn't contain anything.
*/ 

int main() {
    int n;
    int *p = fun(n);
    printf("%d",*p);
    return 0;
}

// This snippet will never work!