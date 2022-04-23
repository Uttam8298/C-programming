#include <stdio.h>
#define N 6

int main()
{
    int arr[N], min, max;

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            min = max = arr[i];
            continue;
        }

        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }

    printf("Minimum  is %d\nMaximum is %d\n", min, max);
}