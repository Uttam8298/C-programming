#include <stdio.h>

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j <= 4 - i; j++)
            printf("*");

        printf("\n");
    }

    for (int i = 2; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}