#include <stdio.h>

int main()
{
	int ar[5] = { 1,2,3,4,5 };
	int *par = ar;  //ar == &ar[0]
	int **dbpar = &par;   //&ar이 안되는 이유 : 이중 포인터 = &포인터;
						// 이중포인터 = &배열명 할수가 없다.
						// 배열명은 포인터가 아니다
						// 배열명 == &배열[0]
						// dbpar = &ar; 라면
						// *dbpar = ar;
						// **dbpar = *ar;
	//이중포인터 = &포인터!!!!! 배열은 포인터가 아니다


	printf("ar = %d\n", ar);
	printf("&ar = %d\n", &ar);
	printf("&par = %d\n", &par);
	printf("\n");
	printf("ar[0] = %d\n", ar[0]);
	printf("*par = %d\n", *par);
	printf("**dbpar = %d\n", **dbpar);
}