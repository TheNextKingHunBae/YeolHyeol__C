#include <stdio.h>

void p420()
{
	int ch1, ch2;

	ch1 = getchar();    // ���� �Է�
	ch2 = fgetc(stdin); // ���� Ű �Է�

	putchar(ch1);
	fputc(ch2, stdout);
}

void p421()
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
}

void p423()
{
	int ch;
	ch = getchar();
	if(ch<97)
		putchar(ch += 32);
	else if(ch>96)
		putchar(ch -= 32);
}
void main()
{
	p423();
}