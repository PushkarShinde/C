#include <stdio.h>

int main() {
    int r = 10;
    printf("The area of circle with radius %d is: %f\n", r, 3.14*r*r);
    int h;
    printf("Enter the height of the cylinder:\n");
    scanf("%d\n", &h);
    printf("The volume of cylinder with radius %d and height %d is: %f", r, h, 3.14*r*r*h);
    return 0;
}