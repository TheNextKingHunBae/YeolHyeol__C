#include <stdio.h>

int Who_Is_First(int num1, int num2,int (*fptr)(int n1, int n2))
{
	return fptr(num1, num2);
}
int p395_OB_FIRST(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else if (num2 > num1)
		return num2;
	else
		return 0;
}

int p395_YB_FIRST(int num1, int num2)
{
	if (num1 < num2)
		return num1;
	else if (num2 < num1)
		return num2;
	else
		return 0;
}

void p395()
{
	int age1 = 10;
	int age2 = 20;
	int first;

	printf("������� 1\n");
	first = Who_Is_First(age1, age2, p395_OB_FIRST);
	printf("%d���� %d�� �� ���̰� ���� %d������ ����\n\n",age1,age2 ,first);

	printf("������� 2\n");
	first = Who_Is_First(age1, age2, p395_YB_FIRST);
	printf("%d���� %d�� �� ���̰� ���� %d������ ����\n\n", age1, age2, first);

}

void main()
{
	p395();
}