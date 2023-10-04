#include <stdio.h>

void Swap_DOUBLE_POINTER(int **ptr1, int **ptr2)
{
	int* temp = *ptr1; 
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void DOUBLE_POINTER()
{
	int num1 = 20, num2 = 50;
	int* ptr1 = &num1, * ptr2 = &num2;

	printf("%d %d\n", *ptr1, *ptr2);
	Swap_DOUBLE_POINTER(&ptr1, &ptr2);
	printf("%d %d\n", *ptr1, *ptr2);
}
void main()
{
	DOUBLE_POINTER();
}