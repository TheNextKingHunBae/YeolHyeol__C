#include <stdio.h>
#include <stdlib.h>

void p407()
{
	int i;
	printf("������ ����: 0���� %d���� \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("������� : %d\n", rand());
}
void P407_1()
{
	int i;
	printf("������ ����: 0���� 100���� \n");
	for (i = 0; i < 5; i++)
		printf("������� : %d\n", rand()%100);
}
void main()
{

	P407_1();
}
