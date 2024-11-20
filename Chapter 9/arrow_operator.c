#include <stdio.h>

typedef struct employee {
    int salary;
    char name[50];
    float score;
} emp;

int main() {
    emp e1;
    emp*p1=&e1; // p1 is a structure pointer to e1
    // (*p1).salary=99;
    // (*p1).score=91.6;
    p1 -> salary=99;
    p1 -> score=91.6;
    printf("The value of salary is: %d\nthe value of score is: %.2f",p1->salary,p1->score);
    return 0;
}