#include <stdio.h>

void printarray(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}

void reverse(int a[], int n){
    int i;
    for(i=0; i<=n/2;i++){
    int temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = temp;
    }
}

int main() {
    int a[]={34, 56, 54, 32, 67, 89, 90, 32, 21};
    printf("The original order of the array elements is: \n");
    printarray(a,9);
    printf("\n");
    reverse(a,9);
    printf("The reverse order of the array elements is: \n");
    printarray(a,9);
    return 0;
}