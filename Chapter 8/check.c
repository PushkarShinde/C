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
    char c ='a';
    int contains=0;
    char str[]="Pushkar";
    for(int i=0;i<strlen(str);i++){
        if(str[i]==c){
            contains=1;
            break;
        }
    }
    if(contains){
    printf("it contains the  character.");
    }
    else{
        printf("It doesn't contain the character.");
    }
    return 0;
}