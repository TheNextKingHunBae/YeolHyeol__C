#include <stdio.h>

void p268_1()
{
	int i = 0;
	int size_str = 0;
	char str[100];
	printf("단어를 입력하세요: ");
	scanf_s("%s", str, 100);
	
	while (str[i] != '\0')
	{
		i++;
	}
	printf("입력된 영단어의 길이는 %d 입니다.", i);
}
void p268_2()
{
	int i=0,j=0;
	char str[100];
	printf("단어를 입력하세요: ");
	scanf_s("%s", str, 100);

	while (str[i] != '\0')
	{
		j++; i++;
	}
	
	int size_str = j;
	char temp;

	for (i = 0; i < size_str / 2; i++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}
	for (i = 0; i <=size_str; i++)
		printf("%c", str[i]);
}
void p268_3()
{
	int i = 0,j;
	int max;
	char str[100];
	printf("단어를 입력하세요: ");
	scanf_s("%s", str, 100);
	while (str[i] != '\0')
	{
		i++;
	}
	max = (int)str[0];
	
	for (int j = 0; j <= i; j++)
	{
		if (max < (int)str[j])
			max = str[j];
	}

	printf("%c", max);
}

void main()
{
	
}