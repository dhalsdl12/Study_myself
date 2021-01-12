#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct teacher {
	char name[11];
	char address[30];
	char tel[11];
	char lesson[20];
	int birth;
};
int main()
{
	struct teacher tear[3];
	for (int i = 0; i < 3; i++)
	{
		printf("%d name: ", i+1);
		scanf("%s", tear[i].name);
		printf("%d address: ", i + 1);
		scanf("%s", tear[i].address);
		printf("%d tel: ", i + 1);
		scanf("%s", tear[i].tel);
		printf("%d lesson: ", i + 1);
		scanf("%s", tear[i].lesson);
		printf("%d birth: ", i + 1);
		scanf("%ld", &tear[i].birth);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d name: %s ", i + 1, tear[i].name);
		printf("address: %s ", tear[i].address);
		printf("tel: %s ", tear[i].tel);
		printf("lesson: %s ", tear[i].lesson);
		printf("birth: %ld \n", tear[i].birth);
	}
}