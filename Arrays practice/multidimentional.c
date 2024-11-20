#include <stdio.h>

int main() {
    int a[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter a number for a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // Row sum!
    int sum=0;
    printf("The row total: ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum+=a[i][j];
        }
        printf("%d ",sum);
        sum=0; // the wow step!
    }

    printf("\nThe column total: ");
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
        sum+=a[i][j];
        }
        printf("%d ",sum);
        sum=0; // the wow step!
    }

   
    return 0;
}