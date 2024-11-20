#include <stdio.h>

int main() {
    char s[]={'P','U','S','H','K','A','R','!','\0'};
    char t[]={"PUSHKAR!"};
    for(int i=0; i<8;i++){
        printf("%c",s[i]);
    }
    printf("\n");
    printf("%s",t);
    return 0;
}
// output:
// PUSHKAR!
// PUSHKAR!