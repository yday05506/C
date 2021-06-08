#include <stdio.h>
void main(void)
{
	int sum = 0;
	for (int a = 1; a <= 10; a++)
	{
		sum += a;
	}
	printf("%d", sum);
}