#include <stdio.h>

void p299_1()
{
	int i, j;
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}

	for (j = 0; j < 5; j++)
		printf("%d ", arr[j]);
}
void p299_2()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
	}

	for (int j = 0; j < 5; j++)
		printf("%d ", arr[j]);
}
void p299_3()
{
	int i, sum=0;
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];

	for (i = 0; i <5; i++)
	{
		sum += (*ptr);
		ptr--;
	}

	printf("%d", sum);
}
void p299_4()
{
	int i,temp;
	int arr[6] = { 1,2,3,4,5,6 };
	int* fptr = &arr[0]; 
	int *bptr = &arr[5];

	for (i = 0; i < 3; i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;

		fptr++;
		bptr--; 
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
}


void main()
{
	p299_4();
}