#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int recursive(int num)
{
	if(num <=0)
		return 0;
	printf("recursive call! %d\n", num);
	recursive(num-1);
}

int main()
{
	recursive(3);
	return 0;
}