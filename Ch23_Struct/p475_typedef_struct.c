#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];              // typedef struct person(����)
	char phoneNum[20];			//{
	int age;					//}
}Person;						//Person;  �̷��Ե� ����

void p475()
{
	Point pos = { 10,20 };
	Person p1 = { "ȫ�浿", "010-1234-5678", 20 };

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d", p1.name, p1.phoneNum, p1.age);
}

void main()
{
	p475();
}