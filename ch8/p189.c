#include <stdio.h>

void p189_1()
{
	int num;
	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0)
			printf("%d ", num);
		else if (num % 9 == 0)
			printf("%d ", num);
	}
}
void p189_2()
{
	int num1, num2;
	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("%d", num1 - num2);
	else
		printf("%d", num2 - num1);
}
void p189_3()
{
	int KOR, ENG, MAT;
	float avg;
	printf("���� ���� ������ ������ �Է����ּ���: ");
	scanf_s("%d %d %d", &KOR, &ENG, &MAT);

	avg = (float)(KOR + ENG + MAT) / 3;

	printf("��������� %f�Դϴ� \n", avg);
	if (avg >= 90)
		printf("A");
	else if (avg >= 80)
		printf("B");
	else if (avg >= 70)
		printf("C");
	else if (avg >= 50)
		printf("D");
	
}
void p189_4()
{
	int num1, num2;
	int result;
	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 > num2) ? num1 - num2 : num2 - num1;

	printf("%d", result);
}
void main()
{
	p189_4();
}