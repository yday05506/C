#include <stdio.h>

void print(int* ptr);
void erase(int* ptr);

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	erase(arr);
	print(arr);
}

void print(int* ptr)
{
	for (int i = 0; i < 4; i++)
		printf("%d \n", ptr[i]);
}

//ptr엔 시작주소가 들어감
void erase(int* ptr)
{
	for (int i = 0; i < 4; i++)
		ptr[i] = 0;
}