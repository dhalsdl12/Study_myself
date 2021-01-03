#include <stdio.h>

int main()
{
	int temp[2][2][2] = {
		{
			{1,2},
			{3,4}
		},
		{
		{5,6},
		{7,8}
		}
	};

	printf("0th \n");
	printf("%4d%4d\n", temp[0][0][0], temp[0][0][1]);
	printf("%4d%4d\n", temp[0][1][0], temp[0][1][1]);

	printf("1th \n");
	printf("%4d%4d\n", temp[1][0][0], temp[1][0][1]);
	printf("%4d%4d\n", temp[1][1][0], temp[1][1][1]);

	printf("sizeof(all): %d\n", sizeof(temp));
	printf("sizeof(one meong): %d\n", sizeof(temp[0]));
	printf("sizeof(One hyeong): %d\n", sizeof(temp[0][0]));
}