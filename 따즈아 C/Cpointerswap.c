#include <stdio.h>

void swap(int*, int*);
int main()
{
	int x = 10, y = 20;

	printf("swap before == x: %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("main == x: %d, y = %d\n", x, y);
}
void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	printf("after swap\n");
	printf("swap == x: %d, y = %d\n", *px, *py);

}