#include <stdio.h>

int p237(int num)
{
	static int total;
	total += num;

	return total;
}

int p237_1()
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�: %d: ", i + 1);
		scanf_s("%d", &num);
		printf("����: %d \n", p237(num));
	}
	return 0;
}

void main()
{
	p237_1();
}