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

	strcpy(p1.name, "���ƹ�");
	strcpy(p1.phone, "0101-1234-5678");
	p1.age = 30;

	printf("�̸� �Է�: "); scanf_s("%s", p2.name, 20);
	printf("��ȣ �Է�: "); scanf_s("%s", p2.phone, 20);
	printf("���� �Է�: "); scanf_s("%d", &(p2.age));

	printf("�̸�: %s\n", p1.name);
	printf("��ȣ: %s\n", p1.phone);
	printf("����: %d\n\n", p1.age);

	printf("�̸�: %s\n", p2.name);
	printf("��ȣ: %s\n", p2.phone);
	printf("����: %d\n", p2.age);
}

void main()
{
	p457();
}