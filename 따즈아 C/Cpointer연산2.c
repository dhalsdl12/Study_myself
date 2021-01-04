#include <stdio.h>

int main()
{
	int *pi = 1000;
	float *pf = 1000;
	double *pd = 1000;
	char *pc = 1000;

	pi++;
	pf++;
	pd++;
	pc++;

	printf("pi = %d\n", pi);
	printf("pf = %d\n", pf);
	printf("pd = %d\n", pd);
	printf("pc = %d\n", pc);
}