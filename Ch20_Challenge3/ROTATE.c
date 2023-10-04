#include <stdio.h>

void p406_1_ROTATE(int (*arr)[4])
{
	int i, j;
	int copy[4][4];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			copy[i][j] = arr[i][j];

		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <4; j++)
		{
			arr[j][3 - i] = copy[i][j];
		}
	}
}

void p406_1()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%-3d ", arr[i][j]);
		printf("\n");
	}

	printf("\n\n");
	for(int j=0; j<3; j++)
	p406_1_ROTATE(arr);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%-3d ", arr[i][j]);
		printf("\n");
	}

}
void main()
{
	p406_1();
}