#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

void p459()
{
	struct point pos = { 10,20 };
	struct person man = { "홍길동", "010-2784-2132", 24};   //초기화 가능
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
}

void main()
{
	p459();
}