#include <stdio.h>

void p260_1()
{
	int arr[5];
	int num,max, min, sum = 0;
	int i,j;
	printf("5개의 정수를 입력하세요: ");

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

	printf("입력된 정수 중 최대값: %d\n입력된 정수 중 최대값: %d\n입력된 정수의 총 합: %d", max, min, sum);
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