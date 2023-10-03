#include <stdio.h>

int SquareByValue(int num)
{
	return num * num;
}
int SquareByReference(int* num)
{
	int Square = *num;
	*num = Square * Square;

	return 0;
}
void p320_1()
{
	int num = 5;
	printf("SquareByValue: %d   num: %d\n", SquareByValue(num), num);
	SquareByReference(&num);
	printf("SquareByReference: %d\n",num);
}

void Swap_p320_2(int *num1, int *num2, int *num3)
{
	int* temp;
	temp = *num1;
	*num1 = *num3;
	*num3 = *num2;
	*num2 = temp;

}
void p320_2()
{
	int num1 = 10, num2 = 20, num3 = 30;
	
	printf("swap Àü\n num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
	Swap_p320_2(&num1, &num2, &num3);
	printf("swap ÈÄ\n num1: %d, num2: %d, num3: %d\n", num1, num2, num3);

}

void main()
{
	
}