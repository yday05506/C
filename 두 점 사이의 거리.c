#include <stdio.h>
#include <math.h>

double Distance(int x, int y);

typedef struct point
{
	int x;
	int y;
}Point;

void main(void)
{
	Point p1 = { 0, 0 }, p2 = { 3, 4 };
	printf("%lf \n", Distance(p2.x, p2.y));
}

double Distance(int x, int y)
{
	x = pow(x, 2);
	y = pow(y, 2);
	return sqrt(x + y);
}