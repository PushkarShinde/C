#include <stdio.h>

int main() {
    int a[90];
    int i;
    for (i=0;i<=90;i++){
        a[i]=i;
    }
    printf("How many marks you recieved: ");
    scanf("%d",&i);
    printf("You have recieved %d marks", a[i]);
    return 0;
} 