#include <stdio.h>

float force(float m){
    float f=m*9.8;
    return f;
}

int main() {
    float mass;
    printf("Enter the mass of the object: ");
    scanf("%f",&mass);
    float f=force(mass);
    printf("The force of attraction of the object and The Earth is: %.3f", f);
    return 0;
}