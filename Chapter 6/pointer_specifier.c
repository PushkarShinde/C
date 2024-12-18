#include <stdio.h>
int main()
{
    int a = 10;
    printf("The Memory Address of a: %p\n",(void*)&a); 
    /*
    Why Casting (void*) Is Best Practice:
        -Ensures Portability: Some architectures might treat pointer types differently, 
        and mismatched types could result in incorrect output.
        -Eliminates Warnings: Keeps your code clean and avoids unnecessary warnings during compilation, 
        particularly with strict flags like -Wall -Wextra.
        -Conforms to C Standard: Following the standard makes your code more robust and maintainable.
    */
    return 0;
}