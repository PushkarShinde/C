#include <stdio.h>

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr = a[i];
        int prev = i-1;
        
        while(prev>=0 && a[prev]>curr){ // '<' for decending order
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;
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
    insertionSort(arr,n);
    printa(arr, n);
    return 0;
}