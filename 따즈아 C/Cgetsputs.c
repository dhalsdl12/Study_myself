#include <stdio.h>

int main()
{
	//gets(), puts()
	//���ڿ� �Է½� ���
	char str[31];

	printf("�Է�: ");
	//scanf("%s", str); //���ڿ� �Է��Ҷ� �����ʿ� ����
	//scanf�� ���� ���޴´�.

	gets(str);
	puts(str);
}