#include <stdio.h>

void main()
{
	int opt;
	int num1, num2;
	int result;
	printf("1.����  2.���� 3.���� 4.������ \n");
	printf("����=> ");
	scanf_s("%d", &opt);
	printf("�ΰ��� ������ �Է�=>");
	scanf_s("%d %d", &num1, &num2);
	

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("����� %d��.", result);
}