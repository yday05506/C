#include <stdio.h>

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

void main(void)
{
	int C_score;
	printf("C언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int JAVA_score;
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &JAVA_score);
	cal_grade(JAVA_score);

	int CA_score;
	printf("컴퓨터 구조 점수를 입력하시오 : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);
}