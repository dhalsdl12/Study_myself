#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	struct teacher tear;
	printf("name: ");
	scanf("%s", tear.name);
	printf("address: ");
	scanf("%s", tear.address);
	printf("tel: ");
	scanf("%s", tear.tel);
	printf("lesson: ");
	scanf("%s", tear.lesson);
	printf("name: ");
	scanf("%d", &tear.birth);
	printf("\n");

	printf("name: %s\naddress: %s\ntel: %s\n", tear.name, tear.address, tear.tel);
	printf("lesson: %s\nbirth: %d\n", tear.lesson, tear.birth);
}