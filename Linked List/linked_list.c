#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main() {
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*forth;
    // allocating memory for nodes in the heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));

    // linking first and second node
    head -> data = 24;
    head -> next = second;

    // linking second and third node
    second -> data =12;
    second -> next = third;

    // linking third to forth
    third -> data = 31;
    third -> next = forth;

    // linking forth to NULL
    forth -> data = 26;
    forth -> next = NULL;

    // traversal
    linkedListTraversal(head); 
    return 0;
}