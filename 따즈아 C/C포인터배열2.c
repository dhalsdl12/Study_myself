#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *name[5] = { "�޸�","CPU","�����","���κ���","HD" };
	int code_num;

	printf("Code Num : ");
	scanf("%d", &code_num);

	if ((code_num >= 0) && (code_num <= 4))
	{
		printf("��ǰ�� : %s\n", name[code_num]);
	}
	else
	{
		printf("error!\n");
	}
}