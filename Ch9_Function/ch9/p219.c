#include <stdio.h>
/// �� ������ �Է¹޾� ���밪�� ū ������ ���밪�� ���

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
	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d �� ���밪�� ū ���� %d", num1, num2, AbsCompare(num1, num2));
	
}