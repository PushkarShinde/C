#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node*ptr){
    while(ptr!=NULL){
        if(ptr->next==NULL){
            printf("%d\n",ptr->data);
        } else{
            printf("%d->",ptr->data);
        }
        ptr=ptr->next;
    }
}

struct Node* deleteAtBeginning(struct Node*head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node* deleteNodeWithValue(struct Node* head, int value) {
    if (head == NULL) return NULL;
    if (head->data == value) {
        return deleteAtBeginning(head);
    }
    struct Node* ptr = head;
    while (ptr->next != NULL && ptr->next->data != value) {
        ptr = ptr->next;
    }
    if (ptr->next != NULL) {
        struct Node* post = ptr->next;
        ptr->next = post->next;
        free(post);
    }
    return head;
}


struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node* deleteAfterNode(struct Node* head, int index) {
    struct Node* ptr=head;
    int i = 0;
    while (ptr != NULL && i < index) {
        ptr = ptr->next;
        i++;
    }
    if (ptr == NULL || ptr->next == NULL) return head;
    struct Node* post = ptr->next;
    ptr->next = post->next;
    free(post);
    return head;
}

int main() {
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*forth;
    struct Node*fifth;
    struct Node*sixth;
    struct Node*seventh;
    // allocating memory for nodes in the heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    sixth=(struct Node*)malloc(sizeof(struct Node));
    seventh=(struct Node*)malloc(sizeof(struct Node));
    
    // linking first and second node
    head -> data = 24;
    head -> next = second;

    // linking second and third node
    second -> data =12;
    second -> next = third;

    // linking third to forth
    third -> data = 31;
    third -> next = forth;

    forth -> data = 26;
    forth -> next = fifth;

    //final node
    fifth -> data = 100;
    fifth -> next = sixth;

    sixth -> data = 200;
    sixth -> next = seventh;

    seventh -> data = 300;
    seventh -> next = NULL;
    
    // traversal
    linkedListTraversal(head); 
    head=deleteAfterNode(head,5);
    linkedListTraversal(head); 
    head=deleteAtBeginning(head);
    linkedListTraversal(head);
    head=deleteAtEnd(head);
    linkedListTraversal(head);
    head=deleteNodeWithValue(head,31);
    linkedListTraversal(head);

    return 0;
}