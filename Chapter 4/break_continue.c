#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++)
    {
        if(i==5){
           break; // exit the loop now!
        }
        printf("i is %d\n",i);
    }
    

    for (int i = 0; i < 10; i++)
    {
        if(i==5){
           continue; // skip the iteration now!
        }
        printf("i is %d\n",i);
    }

    return 0;
}