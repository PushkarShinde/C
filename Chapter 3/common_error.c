#include <stdio.h>

int main() {
    int a = 10;
    if (a=11) // '==' must be used instead of '=' here. Else any non zero number inside the () shall be considered 'true'.
        printf("I am 11.");
    else 
        printf("I am not 11.");
    return 0;
}