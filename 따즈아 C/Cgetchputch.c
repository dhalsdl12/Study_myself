#include <stdio.h>
#include <conio.h>

int main()
{
	//getch(), putch()
	//버퍼 사용x
	char i, j, k;

	printf("입력: ");
	i = getch();
	getch();

	j = getch();
	getch();

	k = getch();
	getch();

	printf("\n");
	printf("출력");
	putch(i);
	putch(j);
	putch(k);
	getch;
	//getch는 입력한 값이 보이지 않는다.
}