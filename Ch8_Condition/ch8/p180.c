#include <stdio.h>

void main()
{
	int opt;
	int num1, num2;
	int result;
	printf("1.µ¡¼À  2.»¬¼À 3.°ö¼À 4.³ª´°¼À \n");
	printf("¼±ÅÃ=> ");
	scanf_s("%d", &opt);
	printf("µÎ°³ÀÇ Á¤¼ö¸¦ ÀÔ·Â=>");
	scanf_s("%d %d", &num1, &num2);
	

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("°á°ú´Â %d´Ù.", result);
}