#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *temp;

	*ptr1 += 10;
	*ptr2 -= 10;
	printf("num1: %d, num2: %d \n", *ptr1, *ptr2);
	printf("prt1: %d, ptr2: %d \n", ptr1, ptr2);
	printf("prt1: %d, ptr2: %d \n", &num1, &num2);
	printf("\n");

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("num1: %d, num2: %d \n", *ptr1, *ptr2);
	printf("prt1: %d, ptr2: %d \n", ptr1, ptr2);
	printf("prt1: %d, ptr2: %d \n", &num1, &num2);
	
	return 0;
}