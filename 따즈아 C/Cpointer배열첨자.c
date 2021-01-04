#include <stdio.h>

int main()
{
	int ar[4] = { 10,20,30,40 };
	int *par;
	par = ar;//&ar[0]
	//*(par+0) == ar[0]

	printf("*(par+0) = %d\n", *(par + 0));
	printf("par[0] = %d\n", par[0]);
	printf("par[1] = %d\n", par[1]);
	printf("par[2] = %d\n", par[2]);
	printf("par[3] = %d\n", par[3]);

	//¹è¿­¸í[0] == *(¹è¿­¸í+0)  µ¿ÀÏ!!!
} 
