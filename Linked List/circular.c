#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node*head){
    struct Node*ptr=head;
    do{
        if(ptr->next==head){
            printf("%d",ptr->data);
        }else{
            printf("%d->",ptr->data);
        }
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node* insertAtBeginning(struct Node*head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

struct Node* insertAtIndex(struct Node*head, int data, int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node* insertAtEnd(struct Node*head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* insertAfterNode(struct Node*head, struct Node*preNode, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=preNode->next;
    preNode->next=ptr;
    return head;
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
    forth -> next = head;

    // traversal
    linkedListTraversal(head); 
    return 0;
}