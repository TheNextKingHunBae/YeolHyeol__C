#include <stdio.h>

void p387_1()
{
	int* arr1[5];
	int* arr2[3][5];

	int** ptr1 = arr1;   // arr1�� int�� �̱� ������ ������ ����Ű�Ƿ� arr1�� ���������� int�� ���� ���������̴�.
	int* (*ptr2)[5] = arr2;
}

void P387_2_FuncOne(int arr1[], int arr2[])  // int *arr1
{

}
void P387_2_FuncTwo(int arr1[][4], int arr2[][4])   // int (*arr1)[4]  
{

}
void p387_2()
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[4][4];

	P387_2_FuncOne(arr1, arr2);
	P387_2_FuncTwo(arr3, arr4);
}

void P387_3_FuncOne(int **pArr1, int *(*pArr2)[4])  // int *arr1
{

}
void P387_3_FuncTwo(int ***pArr1, int ***(*pArr2)[4])   // int (*arr1)[4]  
{

}
void p387_3()
{
	int *arr1[3];
	int *arr2[4];
	int **arr3[3][4];
	int ***arr4[4][4];

	P387_3_FuncOne(arr1, arr2);
	P387_3_FuncTwo(arr3, arr4);
}

void p388_4()
{
	int arr[3][2] = { {1,2},{3,4},{5,6} };
	printf("%d %d \n", arr[1][0], arr[0][1]);
	printf("%d %d \n", *(arr[2]+1),*(arr[1]+1));
	printf("%d %d \n", (*(arr+2))[0],(*(arr+0))[1]);
	printf("%d %d \n", **arr,*(*(arr+0)+0));
}

void main()
{

}