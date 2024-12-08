/*Take name and salary of two employees as input from the user and write them to 
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700*/

#include <stdio.h>

int main() {
    FILE*ptr;
    ptr=fopen("employe.txt","w");
    char name1[20], name2[20];
    int salary1, salary2;
    printf("Enter the name of an employee: ");
    scanf("%s",name1);
    printf("Enter the salary of this employee: ");
    scanf("%d",&salary1);
    printf("Enter the name of an employee: ");
    scanf("%s",name2);
    printf("Enter the salary of this employee: ");
    scanf("%d",&salary2);

    fprintf(ptr,"%s, %d\n",name1,salary1);
    fprintf(ptr,"%s, %d\n",name2,salary2);
    return 0;
}