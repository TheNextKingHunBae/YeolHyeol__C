#include <stdio.h>

struct employee
{
	char name[20];
	int age;
};

void p463_1()
{
	int i;
	struct employee arr[3];
	for (i = 0; i < 3; i++)
	{
		scanf_s("%s %d", arr[i].name, 20, &arr[i].age);
	}

	for (i = 0; i < 3; i++)
		printf("%s %d\n", arr[i].name, arr[i].age);
}

void main()
{
	p463_1();
}