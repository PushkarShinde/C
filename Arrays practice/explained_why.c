#include <stdio.h>

void minmax(int a[],int len,int *min, int *max){
    
/*
Q] Why are we taking pointers here?
->  Because we are going to play with the values of 
    min and max variable, and it is a variable declared
    in some other function (ie. main()). 
    Whenever we want to make changes to a variable 
    in another function, we use the address of that variable 
    so that we dont just send the copy of that variable but 
    the actual value in it's address.
*/
    *min=*max=a[0];
    int i;
    for(i=1;i<len;i++){
        if(a[i]<*min){
            *min =a[i];
        }
        else if(a[i]>*max){
            *max=a[i];
        }
    }
}

int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int min, max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("Minimum value in array is: %d\nMaximum value in array is: %d",min,max);
    return 0;
}