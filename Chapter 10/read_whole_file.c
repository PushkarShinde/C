#include <stdio.h>

int main() {
    char ch;
    FILE*ptr;
    ptr=fopen("pushkar.txt","r");
    while(1){
        ch = fgetc(ptr); 
        printf("%c",ch);
        if (ch == EOF){
            break; // when all the content of a file has been read break the loop!
        }
    }
    return 0;
}


