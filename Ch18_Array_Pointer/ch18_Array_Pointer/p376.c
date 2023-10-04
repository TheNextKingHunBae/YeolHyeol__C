#include <stdio.h>

void p376()
{
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p \n", arr1);
	printf("arr1: %p \n", arr1+1);
	printf("arr1: %p \n\n\n", arr1+2);

	printf("arr2: %p \n", arr2);
	printf("arr2: %p \n", arr2+1);
}

void main()
{
	p376();
}