#include <stdio.h>

void p248_1()
{
	int num;
	printf("10진 정수를 입력하세요: ");
	scanf_s("%d", &num);
	printf("16진 정수로 변환하면 %x 입니다.", num);
}
void p248_2(int num1, int num2)
{
	int i, j;
	if (num1 > num2)
	{
		for (num2; num2 <= num1; num2++)
		{
			for (i = 1; i < 10; i++)
				printf("%d * %d = %d\n", num2, i, num2 * i);
			printf("\n");
		}
	}
	else
	{
		for (num1; num1 <= num2; num1++)
		{
			for (j = 1; j < 10; j++)
				printf("%d * %d = %d\n", num1, j, num1 * j);
			printf("\n");
		}
	}
}
void p248_2_1()
{
	int num1, num2;
	printf("몇단부터 몇단 까지 출력할까요?\n");
	scanf_s("%d %d", &num1, &num2);
	p248_2(num1, num2);
}
void p248_3()
{
	int n1, n2, i, gcd;

	printf("두 정수를 입력: ");
	scanf_s("%d %d", &n1, &n2);
	for (i = 1; i <= n1 && i <= n2; ++i)
	{
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}

	printf("%d 와 %d의 최대 공약수: %d\n", n1, n2, gcd);

}
void p249_4()
{
	int bread=1, snack=1, coke=1;
	printf("현재 당신이 소유하고 있는 금액: 3500원\n");
	
	for (bread = 1; bread <= 4; bread++)
	{
		for (snack = 1; snack <= 3; snack++)
		{
			for (coke = 1; coke <= 5; coke++)
			{
				if (bread * 500 + snack * 700 + coke * 400 == 3500)
				{
					printf("크림빵 %d개, 새우깡%d개, 콜라%d개\n", bread, snack, coke);
				}
			}
		}
	}
}
void p249_5()
{
	int i,j,count;
	int Prime_Number=0;

	for (i = 2; i < 100; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d ", i);
			Prime_Number++;
		}
		if (Prime_Number == 10)
			break;
	}
}
void p249_6()
{
	int second;
	int h, m, s;
	printf("초 입력: ");
	scanf_s("%d", &second);

	h = second / 3600;
	m = (second - h * 3600) / 60;
	s = second - (h * 3600 + m * 60);
	printf("[h:%d, m:%d, s:%d]", h, m, s);
}
void p250_7()
{
	int num, count = 0;
	printf("상수 num 입력: ");
	scanf_s("%d", &num);

	while (num > 1)
	{
		num /= 2;
		count++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", count);
}
int p250_8(int num)
{
	if (num == 1)
		return 2;
	else
		return 2 * p250_8(num - 1);
}
void p250_8_1()
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	printf("2의 %d승은 %d",num,p250_8(num));
}

void main()
{
	p248_3();
}