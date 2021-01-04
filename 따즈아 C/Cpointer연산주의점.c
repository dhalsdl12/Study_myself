#include <stdio.h>

int main()
{
	int x = 100;
	int *px = &x;

	//first
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n\n", px);

	//1) px++
	px++;
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n\n", px);

	//2) *px++
	px = &x;
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("*px++ : %d\n", *px++); //px가 가지고있는 값을 출력하고 ++한다.
	printf("px : %d\n\n", px);

	//3) (*px)++
	px = &x;
	(*px)++;
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n\n", px); 
}
