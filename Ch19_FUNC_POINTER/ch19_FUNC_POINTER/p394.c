#include <stdio.h>

void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);

}

void ShowString(char* str)
{
	printf("%s\n", str);
}

void p394()
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char *str) = ShowString;

	fptr1(num1, num2);
	fptr2(str);

}

void main()
{
	p394();
}