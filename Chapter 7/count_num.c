#include <stdio.h>

int countp(int a[],int n){
    int flag =0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ++flag;
        }
    }
    return flag;
}

int main() {
    int a[10]={1,2,-3,4,5,6,7,-8,9,-10};
    printf("%d",countp(a,10));
    return 0;
}