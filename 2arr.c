#include <stdio.h>
#define N 5

int main()
{
    int arr[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int x, num = 0;
    printf("\nEnter number to search: ");
    scanf("%d", &x);

    for (int i = 0; i < N; i++)
        if (arr[i] == x)
        {
            num++;
            printf("Found at position: %d\n", i);
        }

    printf("\n%d occurs %d times in the given array.\n", x, num);
}