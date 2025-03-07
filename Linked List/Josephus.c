#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a circular linked list of size n
struct Node* createCircle(int n) {
    if (n <= 0) return NULL;

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    if (!head) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    head->data = 1;
    head->next = head; // Self-loop for single node

    struct Node* prev = head;
    for (int i = 2; i <= n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (!newNode) {
            printf("Memory allocation failed!\n");
            return head; // Return what’s built so far
        }
        newNode->data = i;
        newNode->next = head; // Point to head to make it circular
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

// Function to solve Josephus problem and return last surviving position
int josephus(struct Node** head, int m) {
    struct Node* ptr = *head;
    struct Node* prev = NULL;

    // Find the last node to set prev correctly
    while (ptr->next != *head) {
        ptr = ptr->next;
    }
    prev = ptr;
    ptr = *head;

    // Eliminate nodes until one remains
    while (ptr->next != ptr) {
        // Move m-1 steps (m including the node to delete)
        for (int i = 1; i < m; i++){
            prev = ptr;
            ptr = ptr->next;
        }
        // Remove the m-th node
        prev->next = ptr->next;
        struct Node* temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    int survivor = ptr->data;
    free(ptr);
    *head = NULL; // List is now empty
    return survivor;
}

int main() {
    int n, m;
    printf("Enter the size of circle: ");
    scanf("%d", &n);
    printf("Enter the interval of death: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("Size and interval must be positive!\n");
        return 1;
    }

    struct Node* head = createCircle(n);
    if (!head) {
        printf("Failed to create circle!\n");
        return 1;
    }

    int survivor = josephus(&head, m);
    printf("The last survivor is at position: %d\n", survivor);

    return 0;
}