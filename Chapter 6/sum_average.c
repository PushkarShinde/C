#include <stdio.h>

int* s(int a,int b){
    int x=(a+b);
    int*y=&x;
    printf("The sum is: %d\n",x);
    return y;
}

float* a(int a, int b){
    float x=(a+b)/2.0;
    float* y=&x;
    printf("The average is: %.2f\n",x);
    return y;
}

int main() {
    int num;
    printf("Enter a two digit number: ");
    scanf("%d",&num);
    int x[2];
    x[1]=num%10;
    x[0]=(num/10)%10;

    int*t=s(x[0],x[1]);
    float*u=a(x[0],x[1]);
    printf("The address of sum is %u and that os the average is %u",t,u);
    return 0;
}