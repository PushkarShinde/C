#include <stdio.h>

int main() {
    int a,b,c,table[3][10];
    scanf("%d %d %d",&a,&b,&c);
    int p[3]={a,b,c};
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            table[i][j]= p[i]*(j+1);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("The value of a[%d][%d] is: %d\n",i,j,table[i][j]);
        }
    }

    return 0;
}