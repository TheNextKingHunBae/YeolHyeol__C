#include <stdio.h>

void p260_1()
{
	int arr[5];
	int num,max, min, sum = 0;
	int i,j;
	printf("5���� ������ �Է��ϼ���: ");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &num);
		arr[i] = num;
		sum += arr[i];
	}

	max = arr[0]; min = arr[0];

	for (j = 0; j < 5; j++)
	{
		if (max < arr[j])
			max = arr[j];
		else if (min > arr[j])
			min = arr[j];
	}

	printf("�Էµ� ���� �� �ִ밪: %d\n�Էµ� ���� �� �ִ밪: %d\n�Էµ� ������ �� ��: %d", max, min, sum);
}
void p260_2()
{
	char str[100] = "Good Time";
	printf("%s", str);
}

void main()
{
	p260_2();
}