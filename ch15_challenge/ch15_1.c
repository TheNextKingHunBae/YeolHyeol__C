#include <stdio.h>


void P328_1_ODD(int arr[])
{
	int i;
	printf("Ȧ�� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
}
void P328_1_Even(int arr[])
{
	int i;
	printf("¦�� ���: ");
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
	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
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