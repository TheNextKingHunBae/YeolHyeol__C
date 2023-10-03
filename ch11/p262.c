#include <stdio.h>

void p262()
{
	char str[] = "Good Morning!";
	printf("배열 str의 크기: %d\n", sizeof(str));
	printf("널 문자 문자형 출력: %c\n", str[13]);
	printf("널 문자 정수형 출력: %d\n", str[13]);
}

void main()
{
	p262();
}