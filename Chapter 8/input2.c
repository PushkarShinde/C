#include <stdio.h>

int main() {
    char name[8];
    // scanf("%s",name);
    for(int i=0;i<7;i++){
        scanf("%c",&name[i]);
        fflush(stdin); 
// removes any unwanted or leftover input (eg. 'Enter key').
    }
    name[7]='\0';
    printf("%s",name);
    return 0;
}