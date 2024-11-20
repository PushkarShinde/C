#include <stdio.h>

int main() {

// invalid operation with constant!
    // int a = 5, b = 6;
    // int c = 10;
    // c += 5 -= b; 

// valid operation with variable!
    int a = 5, b = 6;
    int c = 10;
    c += a -= b;
    return 0;
}