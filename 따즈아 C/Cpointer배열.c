#include <stdio.h>

int main()
{
	int arr[3] = { 1,2,3 };

	printf("¹è¿­ address : %d\n", arr);
	printf("1st address : %d\n", &arr[0]);
	printf("2nd address : %d\n", &arr[1]);
	printf("3rd address : %d\n", &arr[2]);
}