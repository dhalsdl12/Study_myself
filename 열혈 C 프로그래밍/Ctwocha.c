#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int twocha(int a);
int onecha(int b);
int number(int c);
int hae(int a, int b, int c);
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	a = twocha(a);
	b = onecha(b);
	c = number(c);

	printf("(%d)X^2+(%d)X+(%d) = 0\n", a, b, c);
	hae(a,b,c);

}

int hae(int a, int b, int c)
{
	int num = INT_MIN;
	int score;

	for(num; num < INT_MAX; num++)
	{
		score = a*num*num + b*num + c;
		if(score == 0)
		{
			printf("ÇØ´Â %d\n", num);
		}
	}
	return score;
}

int twocha(int a)
{
	printf("a = ");
	scanf("%d", &a);
	return a;
}

int onecha(int b)
{
	printf("b = ");
	scanf("%d", &b);
	return b;
}

int number(int c)
{
	printf("c = ");
	scanf("%d", &c);
	return c;
}

