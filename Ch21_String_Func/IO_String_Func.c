#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

void p426()
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d %s \n", i + 1, str);
	}
}

void p431()
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력:  ", stdout);
	fgets(perID, sizeof(perID), stdin);

	//fflush(stdin);

	ClearLineFromReadBuffer();

	fputs("이름 입력 : ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s  \n", perID);
	printf("이름: %s \n", name);
}
void main()
{
	p431();
}