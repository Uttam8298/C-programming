#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%d", i + 1);
        printf("\n");
    }
    return 0;
}