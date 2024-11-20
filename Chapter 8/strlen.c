#include <stdio.h>

int strlen(char str[]){
        int i=0;
    char c=str[i];
    while(c!='\0'){
        c=str[i];
        i++;
    }
    int count=i-1; // eliminating the final post-increment.
    return count;
}

int main() {
    char str[]="Kanchan Shinde";
    printf("%d",strlen(str));
    return 0;
}