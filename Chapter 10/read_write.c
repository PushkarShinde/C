//Write a program to read a text file character by character and write its content twice in separate file.
#include <stdio.h>

int main() {
    FILE*ptr;
    FILE*ptr1;
    char ch;
    ptr=fopen("file.txt","r");
    ptr1=fopen("file1.txt","a");
    while(1){
        ch = fgetc(ptr);
        if(ch==EOF){
            break;
        } else{
            fprintf(ptr1, "%c",ch);
            fprintf(ptr1, "%c",ch);
            printf("%c",ch);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}