#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Data{
	int num;
	char name[25];
};

int main()
{
	struct Data data = { 1, "°¡±æµ¿" };
	struct Data *pdata;
	pdata = &data;

	printf("pdata->num: %d\n", pdata->num);
	printf("pdata->name: %s\n", pdata->name);
}