#include <stdio.h>

void p224()
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d\n", num1, num2);
}
void p224_1()
{
	int i;
	for (i = 0; i < 3; i++)
		p224();
}

void main()
{

}
