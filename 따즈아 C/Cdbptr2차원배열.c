#include <stdio.h>

int main()
{
	int ar[2][5] = {
		{1,2,3,4,5},
		{1,2,3,4,5}
	};
	int *par = ar[0]; //ar[0]은 1행의 배열 전부
	int **dbpar = &par;

	printf("ar[0][0] = %d\n", ar[0][0]);
	printf("dbpar[0][0] = %d\n", dbpar[0][0]);
}