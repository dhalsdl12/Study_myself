#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void tel_find(char *);
int main()
{
	char name[100];
	int a;

	printf("�˻��� �̸�: ");
	scanf("%s", name);
	tel_find(name);


}
void tel_find(char *find_name)
{
	char *name[10] = { "ȫ����","�ֹ���","�ο���" }; //������ ������ �迭
	char *tel[10] = { "2222-1123","1004-1004","9999-1234" };
	int i;

	for (i = 0; i < 3; i++)
	{
		if (!strcmp(name[i], find_name)) //�ι��ڿ��� ������ ������ ���ǹ�
		{
			printf("%s�� ��ȭ��ȣ�� %s�Դϴ�\n", name[i], tel[i]);
			return;
		}
	}
	printf("%s�� ����ó�� �����ϴ�.\n", find_name);
}