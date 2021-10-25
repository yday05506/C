#include <stdio.h>

void main(void)
{
	int* arr[4];
	char* str[4];

	printf("arr 배열의 0, 1번째 주소 : %p, %p\n", &arr[0], &arr[1]);
	printf("str 배열의 0, 1번째 주소 : %p, %p", &str[0], &str[1]);
}