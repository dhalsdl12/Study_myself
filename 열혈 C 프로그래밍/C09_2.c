#include <stdio.h>

int addtotal(int num)
{
	static int total = 0;

	total += num;
	return total;
}

int main()
{
	int num, i;
	for(i = 0; i < 3; i++)
	{
		printf("input%d: ", i+1);
		scanf("%d", &num);
		printf("total: %d\n", addtotal(num));
	}
	return 0;
}