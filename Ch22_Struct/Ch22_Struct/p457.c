#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person
{
	char name[30];
	char phone[30];
	int age;
};

void p457()
{
	struct person p1, p2, p3;

	strcpy(p1.name, "오훈배");
	strcpy(p1.phone, "0101-1234-5678");
	p1.age = 30;

	printf("이름 입력: "); scanf_s("%s", p2.name, 20);
	printf("번호 입력: "); scanf_s("%s", p2.phone, 20);
	printf("나이 입력: "); scanf_s("%d", &(p2.age));

	printf("이름: %s\n", p1.name);
	printf("번호: %s\n", p1.phone);
	printf("나이: %d\n\n", p1.age);

	printf("이름: %s\n", p2.name);
	printf("번호: %s\n", p2.phone);
	printf("나이: %d\n", p2.age);
}

void main()
{
	p457();
}