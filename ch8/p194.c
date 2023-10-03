#include <stdio.h>

void main()
{
	int num;
	printf("1부터 5까지의 정수 중 하나를 입력하세요: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1을 입력했네요!");
		break;
	case 2:
		printf("2을 입력했네요!");
		break;
	case 3:
		printf("3을 입력했네요!");
		break;
	case 4:
		printf("4을 입력했네요!");
		break;
	case 5:
		printf("5을 입력했네요!");
		break;
	}
}