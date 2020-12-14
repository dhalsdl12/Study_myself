#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int Fibonacci(int num, int num1, int num2);


int main()
{
	int num;
	int num1 = 0, num2 = 1;
	printf("2¿ÃªÛ¿« num = ");
	scanf("%d", &num);
	Fibonacci(num, num1, num2);
}

int Fibonacci(int num, int num1, int num2)
{
	int nextnum;
	int score;

	printf("%d  %d", num1, num2);

	for(score = 2; score < num; score++)
	{
		nextnum = num1 + num2;
		printf("  %d", nextnum);
		num1 = num2;
		num2 = nextnum;
	}
	printf("\n");
}