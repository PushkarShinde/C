#include <stdio.h>

// Structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Enumeration
enum Bool {True, False};
enum Grade { A, B, C, D, F };

// Typedef
typedef unsigned int uint;

// Union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {

    // Using structure
    struct Student s1 = {1, "Pushkar", 85.5};
    printf("Student ID: %d, Name: %s, Marks: %.2f\n", s1.id, s1.name, s1.marks);

    // Using enumeration
    enum Bool var = False;
    printf("%d\n",var); // output: 1   // output: 0 (for True).
    enum Grade g1 = A;
    printf("Grade: %d\n", g1); // Outputs: 0 (as A is the first element)

    // Using typedef
    uint age = 22;
    printf("Age: %u\n", age);

    // Using union
    union Data d1;
    d1.i = 42;
    printf("Data (int): %d\n", d1.i);

    return 0;
}