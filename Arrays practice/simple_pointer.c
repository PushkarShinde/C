#include <stdio.h>

int *findmid(int a[], int n){
    return &a[n/2];
}

int main() {
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid = findmid(a,n); 
    // parameters are a whole array 'a' and an int.
    printf("The mid point of the array is: %d",*mid);
    return 0;
}