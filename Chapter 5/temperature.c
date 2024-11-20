#include <stdio.h>

float CelsiusToFahrenheit(float celsius){
    return (9.0/5.0)*celsius + 32;
}

int main() {
    float celsius;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);
    float fahrenheit=CelsiusToFahrenheit(celsius);
    printf("The temperature in fahrenheit is: %.4f",fahrenheit);
    return 0;
}