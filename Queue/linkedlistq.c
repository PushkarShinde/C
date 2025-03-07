#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void enqueue(struct Node*f, struct Node*b, int val){
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue full.");
    }
    n->data=val;
    n->next=NULL;
    if(f==NULL){
        f=b=n;
    }else{
        b->next=n;
        b=n;
    }
}