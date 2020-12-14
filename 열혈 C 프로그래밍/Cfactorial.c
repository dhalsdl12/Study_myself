#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int factorial(int num);

int main()
{
	int num = 0;
	
	printf("num = ");
	scanf("%d", &num);
	
	for(;;)
	{
		if(num == 0)
			break;
		printf("%d! = %d\n", num, factorial(num));
		printf("num = ");
		scanf("%d", &num);
	}
	return 0;
}

int factorial(int num)
{
	if(num == 0)
		return 1;
	else
		return num * factorial(num-1);
}