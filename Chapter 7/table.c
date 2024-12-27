#include <stdio.h>

int main() {
    int n, table[10];
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 0; i <10; i++)
    {
        table[i]= (i+1)*n;
    }
    for (int i = 0; i <10; i++)
    {
        printf("%d x %d = %d\n",n,i+1,table[i]);
    }
    return 0;
}

// wow!