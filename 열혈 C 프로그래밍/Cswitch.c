#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num;

	printf("num = ");
	scanf("%d", &num);

	switch(num/10)
	{
	case 0:
		printf("0이상 10미만\n");
		break;
	case 1:
		printf("10이상 20미만\n");
		break;
	case 2:
		printf("20이상 30미만\n");
		break;
	default:
		printf("30이상\n");
		break;
	}

	return 0;
}