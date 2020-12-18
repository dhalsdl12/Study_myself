#include <stdio.h>

int main()
{
	int n;
	int i;
	int k = 1;

	printf("상수 n 입력: ");
	scanf("%d", &n);

	for(i = 1;;i++)
	{
		k *= 2;
		if(k < n)
			continue;
		else
		{
			printf("공식을 만적하는 k의 최댓값은 %d\n", i);
			break;
		}
	}
}