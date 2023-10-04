#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

void p462()
{
	int i;
	struct person arr[3] = {
		{"ÀÌ½Â±â", "010-1234-5678", 20},
		{"ÀÌ±â½Â", "010-5678-1238", 20},
		{"±â½ÂÀÌ", "010-0999-9998", 20},
	};

	for (i = 0; i < 3; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);

}

void main()
{
	p462();
}