#include <stdio.h>

int n(int num, int i, int temp)
{
	if(num!=0)
	{
		num -= 1;
		i *= 2;
		n(num, i, temp);
	}
	else
		printf("2의 %d승은 %d\n",temp, i);
	
}

int main()
{
	int num;
	int i = 1;
	int temp;

	printf("정수 입력: ");
	scanf("%d", &num);
	temp = num;

	n(num, i, temp);
}