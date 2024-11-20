#include <stdio.h>

int main() {
    int a[][3]={1,2,3,4,5,6}; // no. of rows is obviosly 2.
    // a[][]={{1,2,3},{4,5,6}};
    int (*ptr)[3]=a; // ptr is a pointer pointing to the 1st 1D array of the 2D array a[][].
    printf("%d %d ",(*ptr)[1], (*ptr)[2]); // 2 3
    ++ptr; // ptr is now a pointer of 2nd 1D array.
    printf("%d %d ",(*ptr)[1], (*ptr)[2]); // 5 6
    return 0;
}
/*
line 7: we know, ptr= pointer to the 1st 1D array.
        *ptr= pointer to the 1st element of 1st 1D array.
        and (*ptr)=((*ptr)+1) // pointer to 2nd element of 1st 1D array.
Line 9: applying similar approach here.

Final output: 2 3 5 6
*/ 
