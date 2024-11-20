#include <stdio.h>

int main()

/* Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */
{
    int pass_m = 40;
    int pass_section = 33;

    int m1;
    int m2;
    int m3;

    printf("Enter your paper_1 result here: \n");
    scanf("%d\n", &m1);
    printf("Enter your paper_2 result here: \n");
    scanf("%d\n", &m2);
    printf("Enter your paper_3 result here: \n");
    scanf("%d\n", &m3);
    float m = (m1 + m2 + m3) / 3;
    if (m >= pass_m && m1 >= pass_section && m2 >= pass_section && m3 >= pass_section)
        printf("You have passed.");
    else
        printf("You have failed.");

    return 0;
}