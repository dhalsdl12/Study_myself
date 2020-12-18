#include <stdio.h>

int main()
{
	int num[5];
	int i, min, max;
	int sum = 0;

	for(i = 0; i < sizeof(num)/sizeof(int); i++)
		scanf("%d", &num[i]);

	min = max = num[0];
	for(i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		if(num[i] > max)
			max = num[i];
		if(num[i] < min)
			min = num[i];

		sum += num[i];
	}
	printf("ÃÖ´ñ°ª: %d\n", max);
	printf("ÃÖ¼Ú°ª: %d\n", min);
	printf("ÃÑ  ÇÕ: %d\n", sum);
}