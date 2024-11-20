#include <stdio.h>

int main() {
    int a = 9;
    float b = 4; // instead set any of the two variables as float.
    float c = a/b; // if both the variables are int then the result will also be int.
    printf("The value of c is: %f", c);
    return 0;
}