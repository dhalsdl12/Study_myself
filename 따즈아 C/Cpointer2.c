#include <stdio.h>

int main()
{
	int *pa;
	float * pb;
	char *pc;
	long *pd;
	double *pe;

	printf("sizeof(pa) = %d\n", sizeof(pa));
	printf("sizeof(pb) = %d\n", sizeof(pb));
	printf("sizeof(pc) = %d\n", sizeof(pc));
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pe) = %d\n", sizeof(pe));

	//포인터 변수는 모두 4바이트 크기를 가진다
	//주소값: 양의 정수형 숫자값
	//따라서 int값과 같다!!
}