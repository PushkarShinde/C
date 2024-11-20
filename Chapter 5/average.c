#include <stdio.h>

float average(int x, int y, int z){
    float w = (x+y+z)/3.0;
    return w;
}

int main() {
    printf("Enter any 3 integer numbers: \n");
    int d[3];
    scanf("%d\n%d\n%d",&d[0],&d[1],&d[2]);
    float a=average(d[0],d[1],d[2]);
    printf("The average is: %f",a);
    return 0;
}