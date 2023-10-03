#include <stdio.h>

void p193_1_1()
{
	int i, j;

	for (i=2; i<9; i+=2)
	{
		for (j=1; j<=i; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n\n");
	}
}
void p193_1_2()
{
	int i, j;
	for (i = 2; i < 10; i++)
	{
		if (i % 2 == 1)
			continue;
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			if (i == j)
				break;
		}
		printf("\n");
	}
}
void p193_2()
{
	int A, Z;
	for (Z = 0; Z <= 9; Z++)
	{
		for (A = 0; A <= 9; A++)
		{
			if (10 * A + Z + 10 * Z + A == 99)
				printf("%d %d", A, Z);
		}
		printf("\n");
	}
}

void main()
{
	p193_2();
}