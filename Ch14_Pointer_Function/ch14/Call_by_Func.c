#include <stdio.h>

void Call_by_Value(int num1, int num2)
{
	printf("전달받은 숫자 =>num1: %d num2: %d\n", num1, num2);

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("swap 후 => num1: %d num2: %d\n", num1, num2);
}
void Call_by_Reference(int *num1, int *num2)
{
	int* temp;
	printf("전달받은 숫자 =>num1: %d num2: %d\n", *num1, *num2);

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	printf("swap 후 => num1: %d num2: %d\n", *num1, *num2);

}
void p314()
{
	int num1 = 20, num2 = 30;

	printf("초기 숫자 =>  %d %d\n\n", num1, num2);
	Call_by_Value(num1, num2);
	printf("call by value 후 => num1: %d num2: %d\n\n", num1, num2);

	printf("초기 숫자 =>  %d %d\n\n", num1, num2);
	Call_by_Reference(&num1, &num2);
	printf("call by reference 후 => num1: %d num2: %d\n\n", num1, num2);

}
void main()
{
	p314();
}