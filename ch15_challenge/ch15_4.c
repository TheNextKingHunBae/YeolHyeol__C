#include <stdio.h>
#include <string.h>

void P329_4()
{
	int i, j = 0, Palindrome = 0;
	int len;
	char str[100];
	printf("문자열 입력: ");
	scanf_s("%s", str, 100);

	len = strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			Palindrome = 1;
		}
	}
	if (Palindrome == 0)
	{
		printf("회문입니다.");
	}
	else
	{
		printf("그냥 단어.....");
	}
}

void main()
{

}