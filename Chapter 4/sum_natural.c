#include <stdio.h>

int main() {
    int i=1;
    printf("The sum of first 10 natural numbers is: \n");

    // WHILE LOOP
    int sum=0;
    while (i<=10)
    {
        sum+=i; // sum = sum+i;
        i++;
    }
    printf("%d\n",sum);

    // FOR LOOP
    int sum1=0;
    for (int j=1;j<=10;j++){
        sum1+=j;
    }
    printf("%d\n",sum1);

    // DO-WHILE LOOP
    int sum2=0;
    int k=1;
    do{
        sum2+=k;
        k++;
    } while(k<=10);
    printf("%d\n",sum2);

return 0;
}