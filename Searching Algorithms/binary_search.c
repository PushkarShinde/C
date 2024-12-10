#include <stdio.h>

int binarysearch1(int a[], int l, int h, int x){
    while(l<=h){
        int mid = (l+h)/2;
        if (a[mid]==x)
            return mid;
        if(a[mid]>x){
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return -1;
}

int binarysearch2(int a[], int l, int h, int x){
    int mid=(l+h)/2;
    if(a[mid]==x){
        return mid;
    }
    if(a[mid]>x){
        return binarysearch2(a,l,mid-1,x);
    } else if(a[mid]<x){
        return binarysearch2(a,mid+1,h,x);
    }
}

int main() {
    int num,n;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    n=sizeof(a)/sizeof(a[0]);
    printf("The array looks like: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the number you want to locate: "); scanf("%d",&num);
    printf("The number is at: %dth index.\n",binarysearch1(a,0,n,num));
    printf("The number is at: %dth index.\n",binarysearch2(a,0,n,num));
    return 0;
}