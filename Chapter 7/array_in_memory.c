#include <stdio.h>

int main() {
    int marks[5];
    printf("Enter the marks of 5 students:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
    printf("The address of roll no. %d is: %u\n",i+1,&marks[i]);
    }
    
    return 0;
}