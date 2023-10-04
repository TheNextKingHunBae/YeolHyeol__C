#include <stdio.h>

struct employee
{
	char name[20];
	char Per_Num[30];
	int Pay;
};

void p458_1()
{
	struct employee per1;
	printf("이름 입력: "); scanf_s("%s", per1.name, 20);
	printf("주민번호 입력: "); scanf_s("%s", per1.Per_Num, 20);
	printf("급여 입력: "); scanf_s("%d", &per1.Pay);

	printf("%s \n", per1.name);
	printf("%s \n", per1.Per_Num);
	printf("%d \n", per1.Pay);

}


void main()
{
	p458_1();
}