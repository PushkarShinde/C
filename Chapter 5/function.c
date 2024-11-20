#include <stdio.h>

int sum(int, int); //Funtion prototype
 
int main() {
    int a=1;
    int b=2;
    // int c=a+b;
    // printf("The sum is %d\n",c);
    int c = sum(a,b); //function call
    printf("%d\n", c); // This command will print the value of the 'return' statement of 'sum()'.

    int a1=14;
    int b1=22;
    // int c1=a1+b1;
    // printf("The sum is %d\n",c1);
    int c1= sum(a1,b1); //function call
    printf("%d\n", c1); // This command will print the value of the 'return' statement of 'sum()'.

    return 0;
}

//Funtion definitioin
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}