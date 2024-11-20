#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int a;
    printf("Enter a two digit number: ");
    scanf("%d",&a);
    int b[2];
    b[1]=a%10;
    b[0]=(a/10)%10;
    swap(&b[0],&b[1]);
    int swapped_num= b[0]*10 +b[1];
    printf("The swapped number will be: %d",swapped_num);
    return 0;
}