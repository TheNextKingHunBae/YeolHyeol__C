#include <stdio.h>

void p365()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1, * ptr2 = &num2, * ptr3 = &num3;

	int* ptrArr[] = { ptr1,ptr2,ptr3 };
	int** dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
}

void main()
{
	p365();
}