#include <stdio.h>

void main()
{
	int num;
	printf("1���� 5������ ���� �� �ϳ��� �Է��ϼ���: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1�� �Է��߳׿�!");
		break;
	case 2:
		printf("2�� �Է��߳׿�!");
		break;
	case 3:
		printf("3�� �Է��߳׿�!");
		break;
	case 4:
		printf("4�� �Է��߳׿�!");
		break;
	case 5:
		printf("5�� �Է��߳׿�!");
		break;
	}
}