#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int kor;
	int eng;
	int math;
	double avg;

	printf("input score : ");
	scanf("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if(avg >= 90)
		printf("grade is \"a\"\n");
	else if(avg >= 80)
		printf("grade is \"b\"\n");
	else if(avg >= 70)
		printf("grade is \"c\"\n");
	else if(avg >= 50)
		printf("grade is \"d\"\n");
	else
		printf("grade is \"e\"\n");

	return 0;
}
 
