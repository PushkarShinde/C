#include <stdio.h>

int main() {
    int a=7;
    int x = ++a +a + a++; // -------> output: 24
    // int x = --a + ++a; // -------> output: 10
    int y = ++a +a + a + ++a;
    printf("%d\n%d",x,y);
    return 0;
}