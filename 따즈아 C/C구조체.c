#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�������� �Ż����� ����ü ����
//�ʵ�: �̸�, �ּ�, ��ȭ��ȣ, ���ǰ���, ����
struct teacher
{
	char name[11];
	char address[30];
	char tel[11];
	char lesson[20];
	long birth;
};

void main()
{
	struct teacher tear; //����ü ���� ���� tear

	printf("sizeof(struct teacher): %d\n", sizeof(struct teacher));
	printf("sizeof(tear): %d\n", sizeof(tear));
	printf("%p\n", &tear);

	printf("%d\n", sizeof(long));
	
}
