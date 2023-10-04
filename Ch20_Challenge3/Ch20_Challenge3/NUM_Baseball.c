#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Get_Rand_Num(int arr1[])
{
	int Hund_Num, Ten_Num, One_Num, Result_Num;
	srand((int)time(NULL));
	while (1)
	{
		Hund_Num = rand() % 9 + 1;  Ten_Num = rand() % 10; One_Num = rand() % 10;
		if (Hund_Num != Ten_Num && Ten_Num != One_Num && Hund_Num != One_Num) break;
	}
	*arr1 = Hund_Num, * (arr1 + 1) = Ten_Num, * (arr1 + 2) = One_Num;
	
}
void Get_Your_Num(int arr2[])
{
	int num1, num2, num3;
	printf("3���� ���� ����: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	*arr2 = num1, * (arr2 + 1) = num2, * (arr2 + 2) = num3;
}

void Baseball_Game(int *STRIKE, int *BALL, int ANSWER_ARR[])
{
	int i, j;
	int YOUR_ARR[3];
	
	while(*STRIKE != 3)
	{
		*STRIKE = 0, * BALL = 0;
		Get_Your_Num(YOUR_ARR);
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (ANSWER_ARR[i]==YOUR_ARR[j]&&i==j)
				{
					(*STRIKE)++;
				}
				else if (ANSWER_ARR[i] == YOUR_ARR[j] && i != j)
				{
					(*BALL)++;
				}
			}
		}
		printf("%d strike  %d ball\n", *STRIKE, *BALL);
	}
	
	
}
void main()
{
	int ANSWER_ARR[3];
	Get_Rand_Num(ANSWER_ARR);
	/*for (int i = 0; i < 3; i++)
		printf("%d ", ANSWER_ARR[i]);*/
	printf("START GAME!\n");
	int STRIKE = 0, BALL = 0;
	while (STRIKE != 3)
		Baseball_Game(&STRIKE, &BALL,ANSWER_ARR);
	printf("GAME OVER!");
}
