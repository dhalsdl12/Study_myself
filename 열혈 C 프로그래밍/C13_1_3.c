#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[4];
	int i, sum = 0;

	for(i = 4; i >= 0; i--)
	{
		sum += *ptr;
		ptr--;
	}
	printf("%d\n", sum);

	return 0;
}