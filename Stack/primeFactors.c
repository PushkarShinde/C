#include <stdio.h>
#include <stdlib.h>

#define CAP 10

int array[CAP];
int top = -1;

void push(int data) {
    if (top == CAP - 1) {
        printf("The fuck dude, jizzed your pants like a 9 yo!!\n");
        return;
    }
    top++;
    array[top] = data;
}

int pop() {
    if (top == -1) {
        printf("Stack underflowed bro!\n");
        return -1; // Return sentinel value instead of exiting
    }
    int result = array[top];
    top--;
    return result;
}

int isFull() {
    return top == CAP - 1; // Simplified
}

int isEmpty() {
    return top == -1; // Simplified
}

void primeFactor(int num) {
    if (num <= 1) {
        printf("Enter a number greater than 1, you numpty!\n");
        return;
    }
    int i = 2;
    while (num != 1) {
        while (num % i == 0) {
            push(i);
            num /= i;
        }
        i++;
    }
    if (top == -1) {
        printf("No prime factors found (shouldn't happen).\n");
        return;
    }
    printf("Prime factors: ");
    while (top != -1) {
        printf("%d ", pop());
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    primeFactor(num);
    return 0;
}