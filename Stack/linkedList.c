#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
} *top = NULL;

void push(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack overflowed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

int pop(){
    struct Node*temp;
    temp=top;
    if(isEmpty()){
        printf("Stack Underflowed.");
        return 1;
    }
    top=top->next;
    free(temp);
    return top->data;
}

int isEmpty(){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

void display() {
    if(isEmpty()){
        printf("Stack Underflowed.");
        return 1;
    }
    struct Node* temp = top;
    printf("The stack elements are: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeStack() {
    struct Node* temp;
    while (top) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

int main() {
    int choice, data;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Print\n4. Quit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) { // Moved inside while loop
            case 1: {
                printf("Enter the element: ");
                scanf("%d", &data);
                push(data);
                break;
            }
            case 2:{
                printf("The top element is poped!\nNew top element is: %d",pop());
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                printf("Exiting program...\n");
                freeStack(); // Clean up memory
                return 0; // Standard success exit code
            }
            default: {
                printf("Wrong choice!\n");
                break; // Added break for consistency
            }
        }
    }
    return 0; // Unreachable, but good practice
}