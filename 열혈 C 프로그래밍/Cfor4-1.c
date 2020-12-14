#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int start;
	int end;
	int result = 0;

	printf("two num input : ");
	scanf("%d %d", &start, &end);
	for(start; start<=end; start++)
	{
		result = result + start;
	}
	printf("result = %d", result);

	return 0; 
}
