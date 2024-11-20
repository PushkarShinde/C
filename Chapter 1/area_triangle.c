#include <stdio.h>

int main()
{
    // double l = 14.5;
    // double b = 9.2;
    int l;
    int b;
    
    printf("Enter length:\n");
    scanf("%d", &l);

    printf("Enter breadth:\n");
    scanf("%d", &b);

    printf("The area of my laptop screen is %d", l*b);
      
    return 0;
}