#include <stdio.h>
#define num 100

int main(void)
{
	int number[num];
	int i, w, j;
	int cnt = 0;

	for(i = 0; i < num; i++)
		number[i] = i;

	for(i = 2; i*2 < num; i++)
	{
		if(number[i] == 0)
			continue;

		for(w = i, j = i; w*j < num; j++)
		{
			number[w*j] = 0;
		}
	}
	number[1] = 0;
	for(i = 0; cnt < 10; i++)
	{
		if(number[i] != 0)
		{
			printf("%d  ", number[i]);
			cnt++;
		}
	}
}