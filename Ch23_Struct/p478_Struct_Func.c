#include <stdio.h>


typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point Get_Current_Position(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}


void p4798()
{
	Point curPos = Get_Current_Position();
	ShowPosition(curPos);
}


void main()
{

}