#include <stdio.h>

void swap(int* num1, int* num2);

void main(void)
{
	int a = 10, b = 20;
	printf("바꾸기 전 a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("바꾸기 후 a : %d, b : %d\n", a, b);
}

//두 변수의 값을 바꿈
void swap(int* num1, int* num2)
{
	int temp;	//임시저장소
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}