#include <stdio.h>

void normalVar() {
    int x = 0;  // normal local variable
    x++;
    printf("Normal x: %d\n", x);
}

void staticVar() {
    static int y = 0;  // static local variable
    y++;
    printf("Static y: %d\n", y);
}

int main() {
    for(int i = 0; i < 3; i++) {
        normalVar();
        staticVar();
    }
    return 0;
}
/*
Here, you can see that the normal variable x is reinitialized every time the function is called, 
while the static variable y retains its value between function calls
*/