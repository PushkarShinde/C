#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(int data, struct Node** top) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack overflowed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflowed!\n");
        return -1;
    }
    struct Node* temp = *top;
    int val = temp->data;
    *top = (*top)->next;
    free(temp);
    return val;
}

int isEmpty(struct Node* top) {
    return top == NULL;
}

void display(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflowed!\n");
        return;
    }
    struct Node* temp = *top;
    printf("The stack elements are: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeStack(struct Node* top) {
    struct Node* temp;
    while (top) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

void reverse(struct Node** top) {
    struct Node* tempStack = NULL;
    int data;

    // Pop all elements from original stack and push to temp stack
    while (*top != NULL) {
        data = pop(top);
        if (data != -1) { // Only push valid data
            push(data, &tempStack);
        }
    }

    // tempStack now holds the reversed order, assign it back to top
    *top = tempStack;
}

int main() {
    struct Node* top = NULL;

    // Push elements
    push(1, &top);
    push(2, &top);
    push(3, &top);
    push(4, &top);

    printf("Original stack:\n");
    display(&top);

    printf("Reversed stack:\n");
    reverse(&top);
    display(&top);

    // Clean up
    freeStack(top);
    return 0;
}