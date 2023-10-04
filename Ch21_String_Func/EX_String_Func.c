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
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s  \n", strlen(str), str);

	RemoveBSN(str);
	printf("����: %d, ����:%s  \n", strlen(str), str);
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

	printf("���ڿ� �Է� 1: ");
	scanf_s("%s", str1, 20);

	printf("���ڿ� �Է� 2: ");
	scanf_s("%s", str2, 20);

	if (!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�. ");

		if (!strncmp(str1, str2, 3))
		{
			puts("�׷��� �� �����ڴ� �����մϴ�.");
		}
	}

}

void main()
{
	p443_STRCMP();
}