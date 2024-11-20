#include <stdio.h>

int main() {
char st[30];
gets(st); // The entered string is stored in st!
puts(st); // the entered string is printed and the cursor gets on the next line.
printf("%s",st);
    return 0;
}