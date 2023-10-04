#include <stdio.h>
#include <math.h>


struct point      //구조체의 정의
{
	int xpos;
	int ypos;
};

void p455()
{
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf_s("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("두 점의 거리는 %g 입니다.\n", distance);

}


void main()
{
	p455();
}