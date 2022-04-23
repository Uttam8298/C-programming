#include <stdio.h>

int main()
{
    int n = 30;

    for (int i = 2; i <= n; i++)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                // break;
            }
        }

        if (flag)
            printf("%d\t", i);
    }
    printf("%c", '\n');
    return 0;
}