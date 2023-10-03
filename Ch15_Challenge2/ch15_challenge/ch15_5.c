#include <stdio.h>

void P332_5()
{
	int arr[4] = { 3,2,4,1 };
	int i,j,temp;
	int len = sizeof(arr) / sizeof(int);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int k=0; k<len; k++)
	printf("%d ",arr[k]);
}
void P332_5_SORT(int arr[],int num)
{
	int i, j;
	int temp;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i) - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void P332_5_1()
{
	int i, num;
	int arr[7];
	for (i = 0; i < 7; i++)
	{
		printf("ют╥б: ");
		scanf_s("%d", &num);
		arr[i] = num;
	}

	P332_5_SORT(arr,7);

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);
}
void main()
{
	P332_5_1();
}