#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

void printEmployee(struct employee e) {
    printf("Name: %s\n", e.name);
    printf("Code: %d\n", e.code);
    printf("Salary: %.2f\n", e.salary);
}

int main() {
    struct employee e1 = {1, 65000.00, "Pushkar"};
    printEmployee(e1);
    return 0;
}
 