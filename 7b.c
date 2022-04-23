#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("Even\n");
    case 1:
        printf("Odd\n");
    }
    return 0;
}