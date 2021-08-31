#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);
 
void main(void)
{
	int subject[3];
	
	printf("C언어 점수를 입력하시오 : ");
	scanf("%d", &subject[0]);
	cal_grade(subject[0]);

	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &subject[1]);
	cal_grade(subject[1]);

	printf("컴퓨터 구조 점수를 입력하시오 : ");
	scanf("%d", &subject[2]);
	cal_grade(subject[2]);

	float avg = average(subject[0], subject[1], subject[2]);
	printf("세 과목의 평균은 %f입니다.\n", avg);
}

void cal_grade(int score)
{
	int score;
	printf("C언어 점수를 입력하시오 : ");
	scanf("%d", &score);

	if (90 <= score && score <= 100)
		printf("A");
	else if (80 <= score && score < 90)
		printf("B");
	else if (70 <= score && score < 80)
		printf("C");
	else if (60 <= score && score < 70)
		printf("D");
	else
		printf("E");

	printf("\n");
}

float average(int a, int b, int c)
{
	return a + b + c / 3.f;
}