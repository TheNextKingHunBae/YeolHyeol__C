#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Get_Com_Choice()
{
	int Com;
	srand((int)time(NULL));
	Com = rand() % 3 + 1;

	return Com;
}
int Get_Your_Choice()
{
	int Your_Choice;
	printf("1.바위 2.가위 3.보자기 \n당신의 선택은?? => ");
	scanf_s("%d", &Your_Choice);

	return Your_Choice;
}

void RSP_GAME(int *Win, int *Tie, int *loose)
{
	while (*loose != 1)
	{
		int Your = Get_Your_Choice();
		int Com = Get_Com_Choice();
		switch (Your)
		{
		case 1: {
			if (Com == 1)
			{
				printf("YOU:Rock COM:Rock  "); printf("Tie!\n"); (*Tie)++; break;
			}
			else if (Com == 2)
			{
				printf("You:Rock Com:Scissor  "); printf("Win!\n"); (*Win)++; break;
			}
			else if (Com == 3)
			{
				printf("You:Rock Com:Paper  ");  printf("LOOOSE...\n"); (*loose)++;  break;
			}
		}
		case 2: {
			if (Com == 2)
			{
				printf("You:Scissor Com:Scissor  "); printf("Tie!\n"); (*Tie)++; break;
			}
			else if (Com == 3)
			{
				printf("You:Scissor Com:Paper  "); printf("Win!\n"); (*Win)++; break;
			}
			else if (Com == 1)
			{
				printf("YOU:Scissor COM:Rock  "); printf("LOOOSE...\n"); (*loose)++; break;
			}
		}
		case 3: {
			if (Com == 3)
			{
				printf("You:Paper Com:Paper  ");  printf("Tie!\n"); (*Tie)++; break;
			}
			else if (Com == 1)
			{
				printf("You:Paper Com:Rock  ");  printf("Win!\n"); (*Win)++; break;
			}
			else if (Com == 2)
			{
				printf("YOU:Paper COM:Scissor  "); printf("LOOOSE...\n"); (*loose)++; break;
			}
		}
		}
	}
}


void main()
{
	int Win = 0; int Tie = 0; int loose = 0;
	RSP_GAME(&Win, &Tie, &loose);
	printf("게임결과 %d승 %d무 %d패 ", Win, Tie, loose);
	
}