#include <stdio.h>

int main()
{
	int *p1 = 1000;
	int *p2 = 1000;

	printf("[before]p1: %d, p2: %d\n", p1, p2);
	p1++;
	p2--;
	printf("[after]p1: %d, p2: %d\n", p1, p2);
}