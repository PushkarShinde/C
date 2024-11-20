#include <stdio.h>

int main() {
    int sum1=0;
    printf("sum of all multiples of 8 is: \n");
    for (int i=1;i<=10;i++){
        int multiple=8*i;
        sum1+=multiple;
    }
    printf("%d\n",sum1);
    return 0;
}