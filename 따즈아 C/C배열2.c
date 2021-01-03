#include <stdio.h>

int main()
{
	int temp[2][3] = {
		{10,20,30},
		{40,50,60}
	};

	printf("%4d%4d%4d\n", temp[0][0], temp[0][1], temp[0][2]);
	printf("%4d%4d%4d\n", temp[1][0], temp[1][1], temp[1][2]);


	printf("sizeof(all): %d\n", sizeof(temp));
	printf("sizeof(one): %d\n", sizeof(temp[0]));
}