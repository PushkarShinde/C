#include <stdio.h>

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void reverse(int a[],int n){
    /* loop i  from 0 to n/2
    swap a[i] with a[(n-1)-i]
    */
   int temp;
   for(int i=0;i<n/2;i++){
        temp =a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
   }
}

int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    printarray(a,10);
    reverse(a,10);
    printarray(a,10);
    return 0;
}