#include <stdio.h>
#include<string.h>
int main() {
    char s1[12] = "hello"; 
char s2[] = " Pushkar!"; 
strcat(s1,s2); // s1 now contains "Hello Pushkar!".
puts(s1);
    return 0;
}