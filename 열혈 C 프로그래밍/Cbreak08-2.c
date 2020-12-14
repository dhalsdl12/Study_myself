#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	int z;
	int sum;

	for(a = 0; a < 10; a++)
	{
		for(z = 0; z < 10; z++)
		{
			sum = 11*a + 11*z;
			if(sum == 99)
			{
				printf("%d%d + %d%d = 99\n", a, z, z, a);
			}
		}
	}
	return 0;
}