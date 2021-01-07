#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int arr[3][5];
	int x = 1;
	int row, col;
	int **dbptr;

	printf("За: ");
	scanf("%d", &row);
	printf("ї­: ");
	scanf("%d", &col);

	dbptr = (int**)malloc(sizeof(int*)*row);

	for (int i = 0; i < row; i++)
	{
		dbptr[i] = (int*)malloc(sizeof(int)*col);
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			dbptr[i][j] = x++;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{ 
			printf("%3d ", dbptr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
		free(dbptr[i]);
	free(dbptr);
}