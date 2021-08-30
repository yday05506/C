#include <stdio.h>

void main(void)
{
	int C_score;
	printf("점수를 입력하시오 : ");
	scanf("%d", &C_score);

	if (90 <= C_score && C_score <= 100)
		printf("A");
	else if (80 <= C_score && C_score < 90)
		printf("B");
	else if (70 <= C_score && C_score < 80)
		printf("C");
	else if (60 <= C_score && C_score < 70)
		printf("D");
	else
		printf("E");

	printf("\n");

	int JAVA_score;
	printf("점수를 입력하시오 : ");
	scanf("%d", &JAVA_score);

	if (90 <= JAVA_score && JAVA_score <= 100)
		printf("A");
	else if (80 <= JAVA_score && JAVA_score < 90)
		printf("B");
	else if (70 <= JAVA_score && JAVA_score < 80)
		printf("C");
	else if (60 <= JAVA_score && JAVA_score < 70)
		printf("D");
	else
		printf("E");

	printf("\n");

	int CA_score;
	printf("점수를 입력하시오 : ");
	scanf("%d", &CA_score);

	if (90 <= CA_score && CA_score <= 100)
		printf("A");
	else if (80 <= CA_score && CA_score < 90)
		printf("B");
	else if (70 <= CA_score && CA_score < 80)
		printf("C");
	else if (60 <= CA_score && CA_score < 70)
		printf("D");
	else
		printf("E");

	printf("\n");
}