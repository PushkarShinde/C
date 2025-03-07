#include <stdio.h>
#include <stdlib.h>

#define CAP 4

int array[CAP];
int top=-1;

void push(int data){
    if(top==CAP-1){
        printf("The fuck dude, jizzed your pants like a 9 yo!!\n");
        return; // return to where the function call came from
    }
    top++;
    array[top]=data;
}

int pop(){
    if(top==-1){
        printf("Stack underflowed bro!\n");
        exit(1); // Abnormal terminstion of the program, unlike simple return!
    }
    int result=array[top];
    top--;
    return result;
}

int isFull(){
    if(top==CAP-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int choice;
    int data;
    while(1){
        printf("1. Push\n2. Pop\n3. Print the top element\n4. Print all the element of the stack\n5. Quit\n\nPlease enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: {
                printf("Enter the data to push: ");
                scanf("%d",&data);
                push(data);
                printf("The input data is pushed to the stack.\n");
                break;
            }

            case 2: {
                data=pop();
                printf("The top element %d is poped out of the stack.\n", data);
                break;
            }
            
            case 3:{
                printf("The top element is: %d\n", array[top]);
                break;
            }
            
            case 4: {
                for(int i=top;i>=0;i--){
                    printf("Element %d: %d\n",i, array[i]);
                }
                break;
            }

            case 5:{
                exit(1);
            }
        }
    }
    return 0;
}