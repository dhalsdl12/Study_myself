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
		printf("0�̻� 10�̸�\n");
		break;
	case 1:
		printf("10�̻� 20�̸�\n");
		break;
	case 2:
		printf("20�̻� 30�̸�\n");
		break;
	default:
		printf("30�̻�\n");
		break;
	}

	return 0;
}