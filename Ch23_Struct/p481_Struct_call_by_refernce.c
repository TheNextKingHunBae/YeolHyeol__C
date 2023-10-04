#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymtrans(Point *ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void Show_Position(Point pos)
{
	printf("[%d %d]\n", pos.xpos, pos.ypos);
}

void p481()
{
	Point pos = { -7,5 };
	Show_Position(pos);
	OrgSymtrans(&pos);
	Show_Position(pos);
}



void main()
{
	p481();
}