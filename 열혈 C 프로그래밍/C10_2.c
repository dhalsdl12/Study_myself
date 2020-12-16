#include <stdio.h>

void gugudan(int num1, int num2)
{
	int i, j;
	for(i = num1; i < num2 + 1; i++)
	{
		for(j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
	}
}

int main()
{
	int num1,num2;

	printf("input num: ");
	scanf("%d %d", &num1, &num2);

	gugudan(num1, num2);
	return 0;
}