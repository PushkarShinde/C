#include <stdio.h>

typedef struct Employee {
    int code;
    float salary;
    char name[10];
} emp;

int main() {
    emp e1; // decalre e1.
// Directly use 'emp' instead of 'struct Employee'.
    e1.salary=10000000.00;
    printf("The salary of e1 is: %.2f rupees per annum.",e1.salary);
    return 0;
}