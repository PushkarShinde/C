#include <stdio.h>

struct employee {
    int code;
    char name[30];
    float salary;
};

int main() {
    struct employee e1 = {10, "Pushkar", 99.99};
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d\n", (*ptr).code);
    printf("%d", ptr->code); 
    // here -> is known as the arrow operator.
    return 0;
}