#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void main()
{
	/*struct Person *pptr1 = (struct Person*)malloc(sizeof(struct Person));
	strcpy(pptr1->name, "�ֹ���");
	pptr1->age = 25;
	strcpy(pptr1->address, "����� ������ ���ﵿ");

	printf("�̸�: %s\n", pptr1->name);
	printf("����: %d\n", pptr1->age);
	printf("�̸�: %s\n", pptr1->address);

	free(pptr1);*/
	struct Person *person = (struct Person*)malloc(sizeof(struct Person) * 10);
	int cnt = 0, i;

	printf("num: ");
	scanf("%d", &i);
	while (i != 0)
	{
		printf("�̸�: ");
		scanf("%s", person->name);
		printf("����: ");
		scanf("%d", &person->age);
		printf("�ּ�: ");
		scanf("%s", person->address);
		cnt++;
		person++;
		printf("num: ");
		scanf("%d", &i);
	}
	for (int j = cnt; j > 0; j--)
	{
		printf("�̸�: %s, ", (person - j)->name);
		printf("����: %d, ", (person - j)->age);
		printf("�ּ�: %s\n", (person - j)->address);
	}
}