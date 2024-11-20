#include <stdio.h>

int main() {
    int marks[5];
    printf("Enter marks of 5 students: \n");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    printf("Enter marks of 5th student: %d",marks[4]);
    
    return 0;
}