#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		/*if (dan == 4)
		{
			break;	//바깥쪽 for문에 대한 break(단은 3까지만)
		}*/
		for (int a = 1; a <= 9; a++)
		{
			if(a==5)
			{
				break;	//안쪽 for문에 대한 break(수는 4까지만)
			}
			printf("%d X %d = %d \n", dan, a, dan * a);
		}
	}
	printf("\n");
}