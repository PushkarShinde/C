#include <stdio.h>

int main() {
    FILE*ptr; int n=10;
    ptr = fopen("file.txt","w");
    fprintf(ptr,"Output of multiplication_table.c file: \n");
    for(int i=0; i<10;i++){
        fprintf(ptr,"%d x %d = %d\n", n, i+1, n*(i+1));
    }
    fprintf(ptr,"----------------------------------------------\n");
    fclose(ptr);
    return 0;
}