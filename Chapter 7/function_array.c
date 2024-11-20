#include <stdio.h>

void printarray(int *i, int n); // function prototype
          // or 
void printarray(int i[], int n); 

int main() {
    int  n, arr[5];
printarray(arr, n); // function call
    return 0;
}