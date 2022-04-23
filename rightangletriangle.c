#include <stdio.h>

int main()
{
    int c = 1;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}