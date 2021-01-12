#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Data {
	int num;
	char name[25];
};
int main()
{
	struct Data *data;
	int count = 0, i;

	data = (struct Data*)malloc(sizeof(struct Data) * 10);
	printf("number: ");
	scanf("%d", &data->num);
	while (data->num != 0)
	{
		printf("name: ");
		scanf("%s", (data++)->name);
		printf("number: ");
		scanf("%d", &data->num);
		count++;
	}
	printf("\n\n");
	for (i = count; i > 0; i--)
	{
		printf("%d.%s\n", (data - i)->num, (data - i)->name);
	}
	free(data);
}