#include <stdio.h>

void Const_P324_ShowAllData(const int arr[], int len)
{
	int i;
	/*for (i = 0; i < 5; i++)
		arr[i] += 4;*/
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);  //배열요소의 값을 바꾸는 일 없도록 하기 위해
	printf("\n");
}
void P324_ShowAllData(int arr[], int len)
{
	int i;
	for (i = 0; i < 5; i++)
		arr[i] += 4;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);

	printf("\n");

}
void p324_1()
{
	int arr[5] = { 1,2,3,4,5 };

	Const_P324_ShowAllData(arr, sizeof(arr) / sizeof(int));
	P324_ShowAllData(arr, sizeof(arr) / sizeof(int));
	
}

void P324_2_error(const int *ptr)
{
	int* rptr = ptr;
	printf("%d \n", *rptr);
	//*ptr = 20;     // const ==> ptr이 가르키는 값 변경 불가능!
	*rptr = 20;      // 이 코드로 인해 변경이 가능해짐...
	//printf("%d \n", *rptr);
}
void p324_2()
{
	int num = 10;
	int* ptr = &num;
	P324_2_error(ptr);
}
void main()
{
	p324_2();
}