#include <stdio.h>

void P329_3()
{
	int num, i, j = 0, k = 0;
	int arr[10];
	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
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