#include <stdio.h>

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;


void Show_student_info(Student *ptr)
{
	printf("학생 이름: %s \n", ptr->name);
	printf("학생 번호: %s \n", ptr->stdnum);
	printf("학생 학교: %s \n", ptr->school);
	printf("학생 전공: %s \n", ptr->major);
	printf("학생 학년: %d \n", ptr->year);
}


void p485()
{
	Student arr[7];
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("이름: "); scanf_s("%s", arr[i].name, 20);
		printf("번호: "); scanf_s("%s", arr[i].stdnum, 20);
		printf("학교: "); scanf_s("%s", arr[i].school, 20);
		printf("전공: "); scanf_s("%s", arr[i].major, 20);
		printf("학년: "); scanf_s("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
		Show_student_info(&arr[i]);
}


void main()
{
	p485();
}