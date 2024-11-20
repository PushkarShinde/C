#include <stdio.h>

typedef struct complex {
    int real;
    int imaginary;
} C;

void display(C r) {
    printf("The value of complex number is: %d+%di\n", r.real, r.imaginary);
}

int main() {
    C com[5];
    for (int i = 0; i < 5; i++) { 
        printf("Enter real part for index %d: ", i);
        scanf("%d", &com[i].real);
        printf("Enter imaginary part for index %d: ", i);
        scanf("%d", &com[i].imaginary);
        display(com[i]);
    }
    return 0;
}