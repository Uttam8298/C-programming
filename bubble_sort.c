#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

void printArray(int arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {9, 42, 7, 23, 6, 32, 53};

	bubbleSort(arr, 7);

	printf("Sorted array: \n");
	printArray(arr, 7);

        return 0;}