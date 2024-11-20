#include <stdio.h>

// sum should change the value of x
int sum(int*a, int*b){
    *a=5;
/*
The function could never change the value of
any variable just by doing 'a=<number>',
because the copy of that variable is assigned,
not the true variable. Here, '*a' makes sure that 
the original a is asked for.
*/
    return *a+*b;
}

int main() {
    int x=1,y=2;
printf("sum is: %d\n",sum(&x,&y));
printf("x is: %d\n",x);
/*now no matter what the value of our first variable is,
it will always assign it value 5. And thus our output here will be 7. 
*/
    return 0;
}