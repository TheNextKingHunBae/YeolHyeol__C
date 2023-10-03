#include <stdio.h>

void P328_2()
{
	int i = 0, j = 0;
	int num;
	int arr[100];
	printf("10진 정수 입력: ");
	scanf_s("%d", &num);

	while (1)
	{
		arr[i] = num % 2; num /= 2;
		i++; j++;
		if (num == 1)
		{
			arr[i] = 1;
			break;
		}
	}
	for (j; j >= 0; j--)
		printf("%d ", arr[j]);
}

void main()
{

}