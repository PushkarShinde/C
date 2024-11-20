#include <stdio.h>
#include <string.h>

struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important

int main() {
    struct employee e1, e2;
    // e1.name = "Pushkar";
    /*
    In C, you can't use the assignment operator to directly assign a string to a character array. 
    Instead, you'll want to use the strcpy function from the string.h library.
    */
    e1.code=1;
    strcpy(e1.name, "Pushkar"); 
    e1.salary = 65.99;
    printf("%d. %s %f",e1.code, e1.name, e1.salary);
    return 0;
}