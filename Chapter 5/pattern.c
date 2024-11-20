#include <stdio.h>
int main() {
    int n=3;
    for(int i=0;i<3;i++){
        // if i=0, print 1 star 
        // if i=1, print 3 star 
        // if i=2, print 5 star 
        // number of stars are (2*i+1)

        for (int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}