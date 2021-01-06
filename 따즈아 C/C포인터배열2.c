#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *name[5] = { "메모리","CPU","모니터","메인보드","HD" };
	int code_num;

	printf("Code Num : ");
	scanf("%d", &code_num);

	if ((code_num >= 0) && (code_num <= 4))
	{
		printf("제품명 : %s\n", name[code_num]);
	}
	else
	{
		printf("error!\n");
	}
}