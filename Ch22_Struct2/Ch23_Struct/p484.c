#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void Swap_Point(Point *p1, Point *p2)
{
	Point result;
	result = (*p1);
	(*p1) = (*p2);
	(*p2) = result;

}

void p484()
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d %d]\n", pos2.xpos, pos2.ypos);


	Swap_Point(&pos1, &pos2);

	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d %d]\n", pos2.xpos, pos2.ypos);
}

void main()
{
	p484();
}