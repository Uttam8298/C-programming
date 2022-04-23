#include<stdio.h>

int main()
{
    int a = 1, b = 1;
    printf("%d, %d", a, b);

    int terms = 10;
    for (int i = 0; i < terms - 2; i++)
    {
        int temp = a + b;
        a = b;
        b = temp;
        printf(", %d", b);
    }
    printf("%c", '\n');
}