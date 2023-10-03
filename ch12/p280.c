#include <stdio.h>

void p280()
{
	int num = 10;
	printf("º¯¼ö num => %d\n\n",num);
	int* pnum = &num;
	*pnum = 20;

	printf("%d %d", num, *pnum);
}

void main()
{
	p280();
}