#include <stdio.h>

int linear_search(int a[],int n, int num){
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return i;
        } else{
            return -1;
        }
    }
}

int main() {
    int num, n;
    printf("Enter the number of elements in the array: "); scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i); scanf("%d",&a[i]);
    }
    printf("The array looks like: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the number you want to locate: ");
    scanf("%d",&num);
    printf("The number is at: %dth index.",linear_search(a,n,num));
    return 0;
}