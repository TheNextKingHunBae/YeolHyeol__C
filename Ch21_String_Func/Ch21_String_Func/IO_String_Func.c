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

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�:  ", stdout);
	fgets(perID, sizeof(perID), stdin);

	//fflush(stdin);

	ClearLineFromReadBuffer();

	fputs("�̸� �Է� : ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s  \n", perID);
	printf("�̸�: %s \n", name);
}
void main()
{
	p431();
}