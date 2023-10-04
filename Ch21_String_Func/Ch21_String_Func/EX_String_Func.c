#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

void P435_strcpy()
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s  \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용:%s  \n", strlen(str), str);
}

void P437_strncpy()
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1);
	puts(str2);

	/**** case 3 ****/
	strncpy(str3, str1,sizeof(str3));
	puts(str3);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

}

void P440_CONCAT()
{
	char str1[20] = "FIRST~";
	char str2[20] = "SECOND";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	/**** case 1 ****/
	strcat(str1, str2);
	puts(str1);

	/**** case 2 ****/
	strncat(str3, str4, 7);
	puts(str3);

}

void p443_STRCMP()
{
	char str1[20];
	char str2[20];

	printf("문자열 입력 1: ");
	scanf_s("%s", str1, 20);

	printf("문자열 입력 2: ");
	scanf_s("%s", str2, 20);

	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다. ");

		if (!strncmp(str1, str2, 3))
		{
			puts("그러나 앞 세글자는 동일합니다.");
		}
	}

}

void main()
{
	p443_STRCMP();
}