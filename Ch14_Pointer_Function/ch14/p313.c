#include <stdio.h>

void p313_show(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void p313_add(int* param, int len, int num)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += num;
}

void p313()
{
	int arr1[4] = { 1,2,3,4 };

	p313_show(arr1, sizeof(arr1) / sizeof(int));

	p313_add(arr1, sizeof(arr1) / sizeof(int), 1);
	p313_show(arr1, sizeof(arr1) / sizeof(int));

	p313_add(arr1, sizeof(arr1) / sizeof(int), 2);
	p313_show(arr1, sizeof(arr1) / sizeof(int));

	p313_add(arr1, sizeof(arr1) / sizeof(int), 3);
	p313_show(arr1, sizeof(arr1) / sizeof(int));
}
void main()
{
	p313();
}