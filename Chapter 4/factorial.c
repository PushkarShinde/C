#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("the factorial of %d is: \n", num);
    // for loop
    int product = 1;
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }
    printf("%d\n", product);

    // while loop
    int j = 1;
    int pro = 1;
    while (j <= num)
    {
        pro *= j;
        j++;
    }
    printf("%d", pro);
    return 0;
}