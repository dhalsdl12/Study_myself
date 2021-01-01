#include <stdio.h>

int main()
{
	//gets(), puts()
	//문자열 입력시 사용
	char str[31];

	printf("입력: ");
	//scanf("%s", str); //문자열 입력할땐 주조필요 없음
	//scanf는 공백 못받는다.

	gets(str);
	puts(str);
}