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

void dec2bin(int num){
    while(num!=0){
        push(num%2);
        num/=2;
    }
}

void print(){
    if(isEmpty()){
        printf("The stack empty!");
        return;
    }
    printf("Binnary: ");
    while(!isEmpty()){
        printf("%d ",pop());
    }
}

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    dec2bin(num);
    print();
    return 0;
}