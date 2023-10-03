#include <stdio.h>

void p304()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d  \n", *arr[0]);
	printf("%d  \n", *arr[1]);
	printf("%d  \n", *arr[2]);
}

void p305()
{
	char* strArr[3] = { "Hello", "My", "World" };
	printf("%s  \n", strArr[0]);
	printf("%s  \n", strArr[1]);
	printf("%s  \n", strArr[2]);
}

void main()
{
	p305();
}