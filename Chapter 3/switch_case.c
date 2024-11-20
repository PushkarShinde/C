#include <stdio.h>

int main() {
    int a = 3;
    switch (a){
        case 1: 
            printf("a is 1.");
            break;
        case 2:
            printf("a is 2.");
            break;
        case 3:
            printf("a is 3.");
            break;
        case 4:
            printf("a is 4.");
            break;
        default:
            printf("a is invalid.");
    }
    return 0;
}