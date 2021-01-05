#include <stdio.h>

void swap(int, int);
int main()
{
	int x = 10;
	int y = 20;

	printf("swap Àü x: %d, y: %d\n", x, y);
	swap(x, y);
	printf("swap ÈÄ main x: %d, y: %d\n", x, y);
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap ÈÄ x: %d, y: %d\n", x, y);
}