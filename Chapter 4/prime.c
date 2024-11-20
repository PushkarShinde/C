#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    int prime = 1;
    if (num <= 1)
    {
        printf("%d is not a Prime number.", num);
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d is a Prime.", num);
        }
        else
        {
            printf("%d is not a Prime.", num);
        }
    }
    return 0;
}

/*
OOOHHHH WOW!!!!!
I FINALLY DID IT!!
*/
