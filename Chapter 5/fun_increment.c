#include <stdio.h>

int main() {
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++); 
    return 0;
}
// when there are same variables in printf, the evaluation order are from right to left.
// hence output is 6 6 4. 
// if the evaluation order is from left to right, output will be 4 5 5. 