#include <stdio.h>
#include <stdlib.h>

void p407()
{
	int i;
	printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("난수출력 : %d\n", rand());
}
void P407_1()
{
	int i;
	printf("난수의 범위: 0부터 100까지 \n");
	for (i = 0; i < 5; i++)
		printf("난수출력 : %d\n", rand()%100);
}
void main()
{

	P407_1();
}
