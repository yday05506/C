#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	for (int i = 0; i <= 6; i++)
		printf(str);

	printf("%s\n", str);
}