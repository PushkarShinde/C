#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5,6,7,8,9};
    int sum=0, *p;
    for(p=&a[0]; p<=&a[8]; p++){
// for(p = a; p<= a + 4; p++){} will also work
// as &a[0]= a = p (pointer pointing to integer a[0]) 
// the name of the array is the same as the address of the first element of that array.
        sum+=*p;
    } 
    printf("The sum is: %d",sum);
    return 0;
}