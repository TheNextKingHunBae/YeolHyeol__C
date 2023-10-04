#include <stdio.h>

void p384_show(int arr[][4],int column)
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%-3d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}


void p384_add(int (*arr)[4], int column)
{
	int i, j, sum = 0;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			sum+=arr[i][j];
		
	}
	printf("%d\n\n", sum);
}

void p384()
{
	int arr1[2][4] = { {1,2,3,4},{5,6,7,8} };
	int arr2[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	p384_show(arr1, sizeof(arr1)/sizeof(arr1[0]));
	p384_add(arr1, sizeof(arr1)/sizeof(arr1[0]));

	p384_show(arr2, sizeof(arr2)/sizeof(arr2[0]));
	p384_add(arr2, sizeof(arr2)/sizeof(arr2[0]));

	
}

void main()
{
	p384();
}