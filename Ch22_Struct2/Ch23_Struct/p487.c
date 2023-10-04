#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen;
	double rad;
}Circle;

void show_Info(Circle* ptr)
{
	printf("[%d %d] rad: %g\n", (ptr->cen).xpos, (ptr->cen).ypos, ptr->rad);
}


void p487()
{
	Circle c1 = { {1,2},3.9 };
	Circle c2 = { 1,2, 2.5 };
	show_Info(&c1);
	show_Info(&c2);
}

void main()
{
	p487();
}