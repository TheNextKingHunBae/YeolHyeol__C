#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

int GET_AREA(Point p1,Point p2)
{
	int result = (p1.xpos - p2.xpos) * (p1.ypos - p2.ypos);
	if (result < 0)
		result *= -1;
	return result;
}

void show_position(Point p1, Point p2)
{
	printf("[%d  %d]\n", p1.xpos, p2.ypos);
	printf("[%d  %d]\n", p2.xpos, p2.ypos);
	printf("[%d  %d]\n", p1.xpos, p1.ypos);
	printf("[%d  %d]\n", p2.xpos, p1.ypos);
}

Point Get_Point()
{
	Point position;
	printf("¡¬«• ¿‘∑¬«ÿ¡÷ººø‰.\n=>");
	scanf_s("%d %d", &position.xpos, &position.ypos);
	
	return position;
}
void p488_1()
{
	//Point point1 = { 0,0 };
	//Point point2 = { 100,100 };
	//int AREA = GET_AREA(point1, point2);
	int AREA;
	Point point1 = Get_Point();
	Point point2 = Get_Point();
	AREA = GET_AREA(point1, point2);
	printf("≥–¿Ã: %d\n", AREA);
	show_position(point1, point2);
}

void main()
{
	p488_1();
}