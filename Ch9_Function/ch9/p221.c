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
	printf("세 개의 정수를 입력하세요\n");
	num1 = GetNum(); num2 = GetNum(); num3 = GetNum();

	printf("가장 큰 수는 %d 입니다.", GetMaxNum(num1, num2, num3));
	printf("가장 작은 수는 %d 입니다.", GetMinNum(num1, num2, num3));
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
	printf("무엇을 입력할래?\n1.섭씨 \t 2.화씨\n");
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
	printf("몇 개의 피보나치 수열을 나열할까?: ");
	scanf_s("%d", &num1);

	if (num1 < 1)
	{
		printf("1이상의 값을 입력해주세요\n");
		return -1;
	}

	pivot(num1);
}


void main()
{
	
}