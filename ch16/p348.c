#include <stdio.h>

void p348_1()
{
	int i, j;
	int arr[3][9];
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <9; j++)
		{
			arr[i][j] = (i + 2) * (j+1);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <9; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}


}
void p348_2()
{
	int i, j;
	int arr1[2][4] = { {1,2,3,4},
						{5,6,7,8} };
	int arr2[4][2];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", arr2[i][j]);
		}
		printf("\n");
	}

}

void p349_3()
{
	int i, j;
	int total = 0;
	int sub_sum = 0;
	int per_sum = 0;
	int arr[5][5];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		per_sum = 0;
		sub_sum = 0;
		for (j = 0; j < 4; j++)
		{
			per_sum += arr[i][j];
			sub_sum += arr[j][i];
		}
		arr[i][4] = per_sum;
		arr[4][i] = sub_sum;
		total += arr[i][4];
	}
	arr[4][4] = total;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	p348_2();
}