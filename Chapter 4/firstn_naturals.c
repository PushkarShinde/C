#include <stdio.h>

int main() {
    int i=1;
    int n;
    printf("Enter the number: \n");
    scanf("%d\n",&n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}

// allright!!