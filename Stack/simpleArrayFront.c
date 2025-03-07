#include <stdio.h>
#include <stdlib.h>

#define CAP 4
int array[CAP];
int first = -1;

void push(int data) {
    if (first == CAP - 1) {
        printf("Stack is full. Cannot push %d.\n", data);
        return;
    }
    first++;
    for (int i = first; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = data;
}

int pop() {
    if (first == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    int val = array[0];
    for (int i = 0; i < first; i++) {
        array[i] = array[i + 1];
    }
    first--;
    return val;
}

void print(int a[]) {
    if (first == -1) {
        printf("Stack is empty.\n");
        return;
    }
    for (int i = 0; i <= first; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);

    int choice, data;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Print the top element\n4. Print all elements of the stack\n5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter the data to push: ");
                scanf("%d", &data);
                push(data);
                if (first < CAP) {
                    printf("The input data %d is pushed to the stack.\n", data);
                }
                break;
            }

            case 2: {
                if (first != -1) {
                    data = pop();
                    printf("The top element %d is popped out of the stack.\n", data);
                } else {
                    pop();
                }
                break;
            }

            case 3: {
                if (first == -1) {
                    printf("Stack is empty.\n");
                } else {
                    printf("The top element is: %d\n", array[0]);
                }
                break;
            }

            case 4: {
                print(array);
                break;
            }

            case 5: {
                printf("Exiting program.\n");
                return 0;
            }

            default: {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    }
    return 0;
}