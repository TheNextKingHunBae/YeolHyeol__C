#include <stdio.h>


struct point
{
	int xpos;
	int ypos;
};

void p461()
{
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		puts("���� ��ǥ �Է�");
		scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
		printf("[%d %d] ", arr[i].xpos, arr[i].ypos);

}


void main()
{
	p461();
}