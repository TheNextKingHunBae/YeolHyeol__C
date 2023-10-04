#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void p409()
{
	int seed, i;
	printf("씨드값 입력: ");
	scanf_s("%d", &seed);
	
	srand(seed);

	for (i = 0; i < 5; i++)
		printf("정수 출력: %d \n", rand());
}
void p409_REAL_RAND()
{
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 2; i++)
		printf("주사위%d의 결과 : %d \n",i+1, rand() % 6 + 1);
}

void main()
{
	p409_REAL_RAND();
}