#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *pa;
	int sum = 0, i, j;
	float avg;

	printf("input num: ");
	scanf("%d", &j);

	pa = (int*)malloc(sizeof(int)*j);
	for (i = 0; i < j; i++)
	{
		printf("%dth num input: ", i + 1);
		scanf("%d", &pa[i]);

		sum += pa[i];
	}
	free(pa);

	avg = sum / (float)j;
	printf("sum = %d\n", sum);
	printf("avg = %5.3f\n", avg);

	return 0;
}