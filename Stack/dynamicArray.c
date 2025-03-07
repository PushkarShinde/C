#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack {
    int top;
    int* array;
    int capacity;
};

struct Stack* createstack(int capacity) {
    struct Stack* S = (struct Stack*)malloc(sizeof(struct Stack));
    if (!S) return NULL; // Check if memory allocation failed
    S->capacity = capacity;
    S->array = (int*)malloc(S->capacity * sizeof(int));
    S->top = -1;
    if (!S->array) { // Check if array allocation failed
        free(S);
        return NULL;
    }
    return S;
}

int isEmpty(struct Stack* S) {
    return S->top == -1;
}

int isFull(struct Stack* S) {
    return S->top == S->capacity - 1;
}

int size(struct Stack* S) {
    return S->top + 1;
}

void doubleStack(struct Stack* S) {
    S->capacity *= 2;
    int* temp = realloc(S->array, S->capacity * sizeof(int));
    if (!temp) {
        printf("Failed to resize stack!\n");
        return; // Keep old array if realloc fails
    }
    S->array = temp; // Update pointer only if successful
}

void push(struct Stack* S, int data) {
    if (isFull(S)) {
        doubleStack(S);
    }
    if (S->array) { // Ensure array is valid before writing
        S->array[++S->top] = data;
    }
}

int pop(struct Stack* S) {
    if (isEmpty(S)) {
        printf("Stack is Empty!\n");
        return INT_MIN;
    } 
    int val = S->array[S->top--];
    return val;
}

int peek(struct Stack* S) {
    if (isEmpty(S)) {
        printf("Stack is Empty!\n");
        return INT_MIN;
    }
    return S->array[S->top];
}

void deleteStack(struct Stack* S) {
    if (S) {
        if (S->array) {
            free(S->array); // Free array first
        }
        free(S); // Then free structure
    }
}

int main() {
    int i, capacity = 5;
    struct Stack* stk = createstack(capacity); // Fixed function name
    if (!stk) {
        printf("Stack creation failed!\n");
        return 1;
    }

    for (i = 0; i <= 2 * capacity; i++) {
        push(stk, i); // Push 0 to 10 (11 elements)
    }
    printf("Top element is: %d\n", peek(stk)); // Should be 10
    printf("Stack size is: %d\n", size(stk));  // Should be 11
    for (i = 0; i <= capacity; i++) { // Pop 6 elements
        printf("Popped element is %d\n", pop(stk));
    }
    if (isEmpty(stk)) { // Fixed condition
        printf("Stack is empty!\n");
    } else {
        printf("Stack is not empty!\n");
    }
    deleteStack(stk);
    return 0;
}