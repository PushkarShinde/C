#include <stdio.h>

int main() {
    int a[4][2];
    printf("Enter elements of the array: \n");
    for(int i=0;i<=3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<2;j++){
            printf("The element a[%d][%d] is: %d\n",i,j,a[i][j]);
        }
        printf("\n");
    }

    return 0;
}