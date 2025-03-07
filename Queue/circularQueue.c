#include<stdio.h>
#include<stdlib.h>

struct circularq{
    int size;
    int f;
    int b;
    int *arr;
};

void enqueue(struct circularq*q, int val){
    if((q->b+1)%q->size==q->f){
        printf("Queue overflowed");
        return;
    }else{
        q->b=(q->b+1)%q->size;
        q->arr[q->b]=val;
    }
}

int dequeue(struct circularq*q){
    int val;
    if(q->b==q->f){
        printf("The queue is empty!");
        exit(1);
    }
    val=q->arr[q->f];
    q->f=(q->f+1)%q->size;
    return val;
}

void display(struct circularq*q){
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
    struct circularq q;
    printf("Enter the max size of queue: ");
    scanf("%d", &q.size);
    q.f=q.b=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,24);
    enqueue(&q,12);
    enqueue(&q,31);
    enqueue(&q,26);
    display(&q);
    return 0;
}