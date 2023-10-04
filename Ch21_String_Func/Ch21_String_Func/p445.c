#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void abc(char *str)
{
	while (getchar() != '\0');
}

int ASCII_CHAR_SUM(char c)
{
	static int diff = 1 - '1';
	return c + diff;
}
void p445_1()
{
	char str[30];
	int i,sum = 0;
	int len;
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		if ('0'<=str[i] && str[i] <= '9')
			sum += ASCII_CHAR_SUM(str[i]);
	}

	printf("%d", sum);
}

void p445_2()
{
	char str1[20];
	char str2[20];
	char str3[40];

	puts("첫번째 문자열 입력 ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	puts("두번째 문자열 입력 ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);

	printf("결과 =>> %s", str3);
}

int CheckSpace(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1;
}

void p446_3()
{
	char str1[20];
	char str2[20];

	printf("이름과 나이 입력 1(구분 공백): ");
	fgets(str1, sizeof(str1), stdin);
	printf("이름과 나이 입력 2(구분 공백): ");
	fgets(str2, sizeof(str2), stdin);

	if (strncmp(str1, str2, CheckSpace(str1)) == 0)
		printf("이름 동일 \n");
	else
		printf("이름 불일치 \n");

	int age1 = atoi(&str1[CheckSpace(str1) + 1]); //공백위치 +1 한 값부터 나이 시작
	int age2 = atoi(&str2[CheckSpace(str2) + 1]); // &로 나이값 시작 주소값 반환

	if (age1 == age2)
		printf("나이 동일 \n");
	else
		printf("나이 불일치 \n");
}

void main()
{
	p446_3();
}