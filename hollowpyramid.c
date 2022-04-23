#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
            printf(" ");

        printf("*");

        int gap = 2 * i - 3;
        for (int j = 0; j < gap; j++)
            printf(" ");

        if (gap > 0)
            printf("*");

        printf("\n");
    }

    printf("*********\n");
    return 0;
}