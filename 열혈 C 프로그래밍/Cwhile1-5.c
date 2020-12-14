#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;
	float score = 0.0;
	int score1;
	printf("input num : ");
	scanf("%d", &num);

	while(i < num)
	{
		printf("input score : ");
		scanf("%d", &score1);

		score = score + score1;
		i++;
	}
	score = score/num;
	printf("Æò±ÕÀº : %lf", score);
	return 0;

}
 
