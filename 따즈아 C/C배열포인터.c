#include <stdio.h>

int main()
{
	int i, j;
	int num1 = 10, num2 = 20, num3 = 30, num4 = 30;
	int arr[2][2] = { {1, 2}, {3, 4} };

	int *ptr_num[4] = {&num1, &num2, &num3, &num4}; //포인터 배열
	int(*ptr_arr)[2] = arr; //arr == &arr[0] 배열 포인터

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *ptr_num[i]);
	}
	printf("\n\n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", ptr_arr[i][j]);
		}
		printf("\n");
	}
}