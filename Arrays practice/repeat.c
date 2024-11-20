#include <stdio.h>

int main() {
    int seen[10]={0}; // the wow step!
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    int rem;
    while(num>0){
        rem = num%10;
        if(seen[rem]==1){
            break;
        }
        seen[rem]=1;
        num=num/10;
    }
    
    printf("Presence of repeatinng digits in the number: ");
    if(num>0){
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}