#include <stdio.h>

int main() {
/*
Quick Quiz: Write a program to find grade of a student given his marks based on below: 
    90 – 100 => A 
    80 – 90 => B 
    70 – 80 => C 
    60 – 70 => D 
    50 – 60 => E 
    <50     => F 
*/

    char c;
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);
    if (m > 90 && m <= 100){
        printf("Grade is: A");
    }
    else if (m > 80 && m <= 90){
        printf("Grade is: B");
    }
    else if (m > 70 && m <= 80){
        printf("Grade is: C");
    }
    else if (m > 60 && m <= 70){
        printf("Grade is: D");
    }
    else if (m > 50 && m <= 60){
        printf("Grade is: E");
    }
    else if (m <= 50){
        printf("Grade is: F");
    }
    return 0;
}