#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];              // typedef struct person(생략)
	char phoneNum[20];			//{
	int age;					//}
}Person;						//Person;  이렇게도 가능

void p475()
{
	Point pos = { 10,20 };
	Person p1 = { "홍길동", "010-1234-5678", 20 };

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d", p1.name, p1.phoneNum, p1.age);
}

void main()
{
	p475();
}