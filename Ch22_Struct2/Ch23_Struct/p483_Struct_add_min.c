#include <stdio.h>

typedef struct {
	int num1;
	int num2;
}CAL;

CAL Get_Number()
{
	CAL abc;
	printf("정수 두 개를 입력해주세요.");
	scanf_s("%d %d", &abc.num1, &abc.num2);

	return abc;
}

CAL ADD_STRUCT_NUM(CAL NUM1, CAL NUM2)
{
	CAL ADD = { NUM1.num1 + NUM2.num1, NUM1.num2 + NUM2.num2 };
	return ADD;
}

CAL MIN_STRUCT_NUM(CAL NUM1, CAL NUM2)
{
	CAL MIN = { NUM1.num1 - NUM2.num1, NUM1.num2 - NUM2.num2 };
	return MIN;
}


void p483()
{
	CAL NUM_1 = Get_Number();
	CAL NUM_2 = Get_Number();
	CAL RESULT;
	RESULT =ADD_STRUCT_NUM(NUM_1, NUM_2);
	printf("[%d %d]\n", RESULT.num1, RESULT.num2);
	RESULT =MIN_STRUCT_NUM(NUM_1, NUM_2);
	printf("[%d %d]\n", RESULT.num1, RESULT.num2);
	
}

void main()
{
	p483();
}