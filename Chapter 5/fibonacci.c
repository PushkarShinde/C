#include <stdio.h>

void fibonacci(int x){
    int t1=0,t2=1,nextterm;
    printf("The fibonacci series is: %d, %d",t1,t2);
    for (int i=3;i<=x;++i){
        nextterm=t1+t2;
        printf(", %d",nextterm);
        t1=t2;
        t2=nextterm;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}