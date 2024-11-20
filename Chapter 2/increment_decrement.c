#include <stdio.h>

int main() {
    int a = 5, b = 9;
    printf("%d , %d , %d, %d, %d", a++, a++, ++a, a, --a);
    printf("\n%d %d", b, b++);
    b = b + 1;
    printf("\n%d, %d, %d, %d, %d", --b, b++, b--, b, ++b);

/* output */
// 6 , 5 , 7, 7, 7
// 10 9
// 11, 11, 12, 11, 11

    return 0;
}