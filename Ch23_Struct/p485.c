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
	printf("�л� �̸�: %s \n", ptr->name);
	printf("�л� ��ȣ: %s \n", ptr->stdnum);
	printf("�л� �б�: %s \n", ptr->school);
	printf("�л� ����: %s \n", ptr->major);
	printf("�л� �г�: %d \n", ptr->year);
}


void p485()
{
	Student arr[7];
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("�̸�: "); scanf_s("%s", arr[i].name, 20);
		printf("��ȣ: "); scanf_s("%s", arr[i].stdnum, 20);
		printf("�б�: "); scanf_s("%s", arr[i].school, 20);
		printf("����: "); scanf_s("%s", arr[i].major, 20);
		printf("�г�: "); scanf_s("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
		Show_student_info(&arr[i]);
}


void main()
{
	p485();
}