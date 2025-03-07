#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int b;
    int *arr;
};

int isFull(struct Queue*q){
    if(q->b==q->size-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct Queue*q){
    if(q->f==q->b){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct Queue*q, int val){
    if(isFull(q)){
        printf("The queue is full!");
        return;
    }else{
        q->b=q->b+1;
        q->arr[q->b]=val;
    }
}

int dequeue(struct Queue*q){
    int a;
    if(isEmpty(q)){
        printf("The queue is empty!");
        exit(1);
    }else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

void display(struct Queue*q){
    int ind=q->f+1;
    do{
        if(ind==q->b){
            printf("%d\n",q->arr[ind]);
        }else{
            printf("%d,",q->arr[ind]);
        }
        ind++;
    }while(ind!=q->b+1);
}

int main(){
    struct Queue q;
    printf("Enter the max size of queue: ");
    scanf("%d", &q.size);
    q.f=q.b=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,24);
    enqueue(&q,12);
    enqueue(&q,31);
    enqueue(&q,26);
    display(&q);
    return 0;
}