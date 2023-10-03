#include <stdio.h>

void P329_3()
{
	int num, i, j = 0, k = 0;
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &num);

		if (num % 2 == 1)
		{
			arr[k] = num;
			k++;
		}
		else if (num % 2 == 0)
		{
			arr[9 - j] = num;
			j++;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}

void main()
{

}