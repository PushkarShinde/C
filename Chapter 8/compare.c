#include <stdio.h>
#include <string.h>
int main() {
int  a= strcmp("far", "joke"); // Negative value 
int  b= strcmp("joke", "far"); // Positive value 
printf("%d\n%d",a,b);
    return 0;
}