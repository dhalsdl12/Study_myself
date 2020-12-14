#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("Three num : ");

	scanf("%d %o %x", &num1, &num2, &num3);
	//%o는 8진수, %x는 16진수의 데이터를 받아온다

	printf("입력된 정수의 10진수 출력 : ");
	printf("%d %d %d\n", num1, num2, num3);

	return 0;

}
 
