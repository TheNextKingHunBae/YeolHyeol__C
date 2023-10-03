#include <stdio.h>
/// 두 정수를 입력받아 절대값이 큰 정수의 절대값을 출력

int MakeAbs(int num)
{
	if (num >= 0)
		return num;
	else
		return num * -1;
}

int AbsCompare(int num1, int num2)
{
	if (MakeAbs(num1) > MakeAbs(num2))
		return num1;
	else
		return num2;
}


void main()
{
	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d 중 절대값이 큰 수는 %d", num1, num2, AbsCompare(num1, num2));
	
}