#include <stdio.h>

int GetNum()
{
	int num;
	scanf_s("%d", &num);

	return num;
}
int GetMinNum(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		if (num1 < num3)
			return num1;
		else
			return num3;
	}
	else if (num2 < num1)
	{
		if (num2 < num3)
			return num2;
		else
			return num3;
	}
	
}
int GetMaxNum(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
			return num2;
		else
			return num3;
	}

}
void p221_1()
{
	int num1, num2, num3;
	printf("�� ���� ������ �Է��ϼ���\n");
	num1 = GetNum(); num2 = GetNum(); num3 = GetNum();

	printf("���� ū ���� %d �Դϴ�.", GetMaxNum(num1, num2, num3));
	printf("���� ���� ���� %d �Դϴ�.", GetMinNum(num1, num2, num3));
}

float Get_Temp()
{
	float temp;
	scanf_s("%f,", &temp);
	return temp;
}
float Cel_to_Fah(float num)
{
	float Temp = (float)(num * 1.8) + 32;
	return Temp;
}
float Fah_to_Cel(float num)
{
	float Temp = (float)(num - 32) / 1.8;
	return Temp;
}
void p221_2()
{
	int num;
	printf("������ �Է��ҷ�?\n1.���� \t 2.ȭ��\n");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("%f",Cel_to_Fah(Get_Temp()));
		break;
	case 2:
		printf("%f",Fah_to_Cel(Get_Temp()));
		break;
	}
}

int pivot(int num)
{
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d ", f1);
	else
		printf("%d %d", f1, f2);

	for (i = 0; i < num - 2; i++)
	{
		f3 = f1 + f2;
		printf(" %d", f3);
		f1 = f2;
		f2 = f3;
	}
}
void p221_3()
{
	int num1;
	printf("�� ���� �Ǻ���ġ ������ �����ұ�?: ");
	scanf_s("%d", &num1);

	if (num1 < 1)
	{
		printf("1�̻��� ���� �Է����ּ���\n");
		return -1;
	}

	pivot(num1);
}


void main()
{
	
}