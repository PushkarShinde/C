#include <stdio.h>

int main() {
    double c, f;
    printf("Enter the temperature in celcius:\n");
    scanf("%f\n", &c);
    f = (9/5)*c + 32;
    printf("The temperature in fahrenheit is: %f", f);
    return 0;
}