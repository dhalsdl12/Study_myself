#include <stdio.h>

struct movie
{
	char name[30];
	char actor[30];
};
int main()
{
	struct movie kmovie = { "�Ű��Ա�", "������" };

	printf("��ȭ����: %s\n", kmovie.name);
	printf("��ȭ���: %s\n", kmovie.actor);
}