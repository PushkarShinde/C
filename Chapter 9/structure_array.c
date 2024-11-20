#include <stdio.h>

struct employee {
    int code;
    char name[30];
};

int main() {
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;
    return 0;
}