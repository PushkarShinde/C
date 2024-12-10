// WAP to print numbers from 1 to 10 in such a way that when number is odd, add 1 and when number is even, subtract 1.

#include <stdio.h>

int num=1;
void even(int num){
    if(num<=10){
        printf("%d ",num-1);
        num++;
        odd(num);
    }
}

void odd(int num){
    if(num<=10){
        printf("%d ",num+1);
        num++;
        even(num);
    }
}

int main() {
    odd(num);
    return 0;
}

/*
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) { // Even
            printf("%d ", i - 1);
        } else { // Odd
            printf("%d ", i + 1);
        }
    }
    return 0;
}
*/