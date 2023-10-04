#include <stdio.h>

void MaxAndMin_p368(int arr[], int **maxptr, int **minptr)
{
	int i;
	int* max, * min;
	max = min = &arr[0];
	for (i = 0; i < 5; i++)
	{
		if (*max < arr[i])
		{
			max = &arr[i];
		}
		if (*min > arr[i])
		{
			min = &arr[i];
		}
	}
	
	*maxptr = max;
	*minptr = min;
	
}

void p368_1()
{
	int i;
	int arr[5];
	int* maxPtr;  int* minPtr;


	for (i = 0; i < 5; i++)
	{
		printf("정수 입력 %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	MaxAndMin_p368(arr, &maxPtr, &minPtr);

	printf("%d %d", *maxPtr, *minPtr);
}

void main()
{
	p368_1();
}