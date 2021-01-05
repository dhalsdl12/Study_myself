#include <stdio.h>

void swap(int **, int **);
int main()
{
	int num1 = 10, num2 = 20;
	int *p1, *p2;
	p1 = &num1;
	p2 = &num2;

	printf("before %d, %d\n", num1, num2);
	swap(&p1, &p2);
	printf("after %d, %d\n", num1, num2);

	return 0;
}

void swap(int **ptr1, int **ptr2)
{
	int temp = **ptr1;
	**ptr1 = **ptr2;
	**ptr2 = temp;
}