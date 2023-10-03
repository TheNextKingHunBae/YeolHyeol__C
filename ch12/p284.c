#include <stdio.h>

void p284_1()
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d \n", num);
}
void p284_2()
{
	int num1 = 10; int num2 = 20;
	int* ptr1 = &num1; int* ptr2 = &num2;

	printf("num1: %d  num2: %d\n", num1, num2);

	*ptr1 += 10; *ptr2 -= 10;

	printf("num1: %d  num2: %d\n", num1, num2);

	ptr1 = &num2; ptr2 = &num1;

	printf("num1: %d  num2: %d\n",*ptr1,*ptr2);
	printf("num1: %d  num2: %d\n", num1, num2);

}
void main()
{
	p284_1();
}