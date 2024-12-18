// C Program to demonstrate the formatting methods.
#include <stdio.h>
int main()
{
    char str[] = "geeksforgeeks";
    printf("%20s\n", str);  
    /* 
    Prints the string str with a minimum field width of 20 characters.
    The string is right-aligned within this width.
    If the string is shorter than 20 characters, it is padded with spaces on the left.
    */
    printf("%-20s\n", str);
    /*
    Prints the string str with a minimum field width of 20 characters.
    The string is left-aligned within this width.
    If the string is shorter than 20 characters, it is padded with spaces on the right.
    */
    printf("%20.5s\n", str);
    /*
    Prints the string str with a minimum field width of 20 characters, 
    but only the first 5 characters of the string are displayed.
    */
    printf("%-20.5s\n", str);
    /*
    Prints the string str with a minimum field width of 20 characters, 
    but only the first 5 characters of the string are displayed.
    */
    return 0;
}

/*
Input and Output Formatting
C language provides some tools using which we can format the input and output. 
They are generally inserted between the % sign and the format specifier symbol Some of them are as follows:

-A minus(-) sign tells left alignment.
-A number after % specifies the minimum field width to be printed if the characters are less than the size of the width 
the remaining space is filled with space and if it is greater then it is printed as it is without truncation.
-A period( . ) symbol separates field width with precision.

Precision tells the minimum number of digits in an integer, the maximum number of characters in a string, and the number of digits after the decimal part in a floating value.
*/