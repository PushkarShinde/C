#include <stdio.h>

int main() {
    int n;
    printf("Enter your nummber: \n");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    printf("\n");  
    printf("Table of 10 is: \n");
    int n1=10;
    int j=10;
    while (j>=1){
        printf("%d * %d = %d\n",n1,j,n1*j);
        j--;
    }
    return 0;
}