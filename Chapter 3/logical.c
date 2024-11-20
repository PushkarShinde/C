#include <stdio.h>

int main()
{
    int a = 1;
    int b = 0;
    printf("the value of a and b is %d\n", a && b);
    printf("the value of a or b is %d\n", a || b);
    printf("the value of not b is %d\n", !b);
    /* the value of a and b is 0
    the value of a or b is 1
    the value of not b is 1
    */

    int c = 1;
    int d = 1;
    printf("the value of c and d is %d\n", c && d);
    printf("the value of c or d is %d\n", c || d);
    printf("the value of not d is %d\n", !d);
    /* the value of c and d is 1
    the value of c or d is 1
    the value of not d is 0
    */

    int e = 0;
    int f = 0;
    printf("the value of e and f is %d\n", e && f);
    printf("the value of e or f is %d\n", e || f);
    printf("the value of not f is %d\n", !f);
    /* the value of e and f is 0
    the value of e or f is 0
    the value of not f is 1
    */


    return 0;
}