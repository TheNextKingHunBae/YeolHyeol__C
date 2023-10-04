#include <stdio.h>

void Swap_SINGLE_PTR(int *ptr1, int *ptr2)
{
	int* temp = ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *temp;
}

void SINGLE_PTR()
{
	int num1 = 20, num2 = 50;
	printf("%d ", num1);
	Swap_SINGLE_PTR(&num1, &num2);
	printf("%d", num1);
}

void Swap_DOUBLE_Ptr_FAIL(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

void p361_DOUBLEPOINTER()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	Swap_DOUBLE_Ptr_FAIL(ptr1, ptr2);
	printf("*ptr1 *ptr2: %d %d \n", *ptr1, *ptr2);
}

void main()
{
	ppp();
}
