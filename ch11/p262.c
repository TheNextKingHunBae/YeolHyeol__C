#include <stdio.h>

void p262()
{
	char str[] = "Good Morning!";
	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	printf("�� ���� ������ ���: %c\n", str[13]);
	printf("�� ���� ������ ���: %d\n", str[13]);
}

void main()
{
	p262();
}