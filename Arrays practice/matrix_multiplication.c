#include <stdio.h>
// to multiply two matrix: 
// no. of columns of first matrix == no. of rows of second matrix.

/*
void printarray(int a[][], int r, int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
    }
}
This function won't work because during passing a 2D array to 
a function we must provide the size of second dimension.
*/

int main() {
// for matrix a...
    int ar, ac;
    printf("Enter the row and columns of matrix a: ");
    scanf("%d %d",&ar,&ac);
    int a[ar][ac], i, j;
    for (i=0;i<ar;i++){
        for(j=0;j<ac;j++){
            printf("Enter value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix a is: \n");
    for (i=0;i<ar;i++){
        for(j=0;j<ac;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
// for matrix b...
    int br, bc;
    printf("Enter the row and columns of matrix b: ");
    scanf("%d %d",&br,&bc);
    int b[br][bc];
    for (i=0;i<br;i++){
        for(j=0;j<bc;j++){
            printf("Enter value of b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix b is: \n");
    for (i=0;i<br;i++){
        for(j=0;j<bc;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
// for multiplication of a and b:
    printf("The resultant matrix after axb: \n");
    int k, sum=0, c[ar][bc];
    if(ac==br){
        for(i=0;i<ar;i++){
            for(j=0;j<bc;j++){
                for(k=0;k<br;k++){
                    sum+=a[i][k]*b[k][j];
                }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
            sum=0;
            }
        printf("\n");
        }
    }
    return 0;
}

// size of resultant matrix: 
// rows of first matrix x columns of second matrix.