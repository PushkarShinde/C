#include <stdio.h>

int main() {
    float a[5]={8,9,8.9,9.9,9.8};
    for(int i=0;i<5;i++){
        printf("The marks of roll no. %d is: %.2f\n", i+1, a[i]);
    }
    printf("%d",sizeof(a[0]));
    return 0;
}