#include <stdio.h>

int sum(int x){
    if (x==1){
        return 1;
    }
    return sum(x-1)+x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers is: %d",num,sum(num));
    return 0;
}