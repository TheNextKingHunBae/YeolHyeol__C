#include <stdio.h>


void P328_1_ODD(int arr[])
{
	int i;
	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
}
void P328_1_Even(int arr[])
{
	int i;
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}
void P328_1()
{
	int i,num;
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &num);
		arr[i] = num;
	}
	P328_1_ODD(arr);
	printf("\n");
	P328_1_Even(arr);
}


void main()
{
	
}