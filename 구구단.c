#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
			continue;	//바깥쪽 for문에 대한 continue(3단만 skip)
		for (int a = 1; a <= 9; a++)
		{
			if(a==5)
				continue;	//안쪽 for문에 대한 continue(수 5만 skip)
			printf("%d X %d = %d \n", dan, a, dan * a);
		}
	}
	printf("\n");
}