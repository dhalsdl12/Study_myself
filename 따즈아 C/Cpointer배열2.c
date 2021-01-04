#include <stdio.h>

int main()
{
	int a[5] = { 10,20,30,40,50 };
	int *ptr;
	ptr = a; //ptr = &a[0];  a==&a[0]
	//a는 a[0]의 주소과 같으니 그냥 에이를 적어준다

	printf("ptr: %d\n", *ptr);
	printf("ptr: %d, &a[0]: %d\n", ptr, &a[0]);
	printf("\n");
	ptr++; //주소값으로 가서 주소값을 증가시킨다.
	printf("ptr: %d\n", *ptr);
	printf("ptr: %d, &a[1]: %d\n", ptr, &a[1]);
}