#include <stdio.h>

void p312(int *param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 1,2,3,4,5};

	p312(arr1, sizeof(arr1) / sizeof(int));
	p312(arr2, sizeof(arr2) / sizeof(int));
}