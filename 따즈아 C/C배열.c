#include <stdio.h>

int main()
{
	// &변수명: 변수의 주소
	int a[3];

	printf("a = %d\n", &a);
	printf("a = %d\n", a);   //벼열명
	printf("a[0] = %d\n", &a[0]);
	printf("a[1] = %d\n", &a[1]);
	printf("a[2] = %d\n", &a[2]);

	printf("sizeof(a) = %d\n", sizeof(a)); //sizeof(변수): 변수 몇 바이트?
}