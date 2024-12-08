#include <stdio.h>

void swap(int *n, int *m){
    int temp;
    temp= *n;
    *n=*m;
    *m=temp;
}

void selectionSort(int a[],int n){
    int i, j;
    for(i=0;i<n;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){ // '<' for decending order
                min =j;
            }
        }
        swap(&a[min], &a[i]);
    }
}

void printa(int a[], int n){
    for(int i=0; i<n;i++){
        printf("%d ", a[i]);
    }
}

int main() {
    int arr[]={12,3,65,73,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printa(arr, n);
    return 0;
}