//printf 함수를 가지고 있음
#include <stdio.h>

//malloc, free 함수를 가지고 있음
#include <stdlib.h>

void main(void)
{
	int a = 3;
	int* ptr1 = &a;
	printf("%d \n", *ptr1);
}