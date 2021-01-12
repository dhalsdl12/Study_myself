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
	strcpy(pptr1->name, "최민지");
	pptr1->age = 25;
	strcpy(pptr1->address, "서울시 강남구 역삼동");

	printf("이름: %s\n", pptr1->name);
	printf("나이: %d\n", pptr1->age);
	printf("이름: %s\n", pptr1->address);

	free(pptr1);*/
	struct Person *person = (struct Person*)malloc(sizeof(struct Person) * 10);
	int cnt = 0, i;

	printf("num: ");
	scanf("%d", &i);
	while (i != 0)
	{
		printf("이름: ");
		scanf("%s", person->name);
		printf("나이: ");
		scanf("%d", &person->age);
		printf("주소: ");
		scanf("%s", person->address);
		cnt++;
		person++;
		printf("num: ");
		scanf("%d", &i);
	}
	for (int j = cnt; j > 0; j--)
	{
		printf("이름: %s, ", (person - j)->name);
		printf("나이: %d, ", (person - j)->age);
		printf("주소: %s\n", (person - j)->address);
	}
}