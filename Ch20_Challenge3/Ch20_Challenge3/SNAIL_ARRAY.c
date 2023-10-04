#include <stdio.h>
#include <stdlib.h>

int arr[100][100];
int count = 1;

void Left_To_Right(int row, int min, int max)
{
	int i;
	for (i = 0; i < max; i++)
	{
		arr[row][i] = count;
		count++;
	}
}

void Top_to_Bottom(int col, int max, int min)
{
	int j;
	for(j=min+1;)
}

void SNAIL_ARRAY(int num)
{
	int min = 0;
	int max = num;

	for (int i = 0; i < num / 2; i++)
	{
		Left_To_Right(i, min, max);
	}
}

void main()
{
	int num;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);
	SNAIL_ARRAY(num);

	

}