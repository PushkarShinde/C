#include <stdio.h>

int change(int a){
    a =55; // misnomer!
    return 0;
}

int main() {
int b=44;
change(b); //The value of b remains 44!
printf("b is %d",b);
    return 0;
}