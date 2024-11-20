#include <stdio.h>

int main() {
/*
Write a program to find greatest of four numbers entered by the user.
*/
double num1;
printf("Enter a number: \n");
scanf("%lf", &num1);
double num2;
printf("Enter a number: \n");
scanf("%lf", &num2);
double num3;
printf("Enter a number: \n");
scanf("%lf", &num3);
double num4;
printf("Enter a number: \n");
scanf("%lf", &num4);
if (num1>num2 && num1>num3 && num1>num4)
    printf("%.2lf is the greatest.",num1);
else if (num2>num1 && num2>num3 && num2>num4)
    printf("%.2lf is the greatest.",num2);
else if (num3>num2 && num3>num1 && num3>num4)
    printf("%.2lf is the greatest.",num3);
else if (num4>num2 && num4>num3 && num4>num1)
    printf("%.2lf is the greatest.",num4);
    return 0;
}


// BooYeahhh!!! (In Tico's style.)