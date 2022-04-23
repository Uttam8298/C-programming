#include <stdio.h>

double average(int arr[], int len)
{
	double avg = 0;
	for (int i = 0; i < len; i++)
		avg += arr[i];

	return avg / len;
}

int main()
{
	int A[] = {1, 2, 4, 5, 2, 5, 2, 5, 3, 5};
	printf("Average of the numbers is %.2lf\n", average(A, 10));

	return 0;
}