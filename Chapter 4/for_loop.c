#include <stdio.h>

int main() {
// Write a program for printinng the first 'n' natural numbers.
    int n;
    scanf("%d\n",&n);
    printf("First %d natural number are: \n",n);
    for(int i =1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}