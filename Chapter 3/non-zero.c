#include <stdio.h>

int main() {
    if (1) { // All non-zero numbers are considered as true in C language.
        printf("true\n");
    }
    if (345){ // All non-zero numbers are considered as true in C language.
        printf("true");
    }
    if (0){ // 0 is considered as false in C language.
        printf("true");
    }
    return 0;
}