#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct movie {
	char name[30];
	char actor[30];
};

int main()
{
	struct movie movies[3]; //movies[0]..., 3���� ����ü ����(�迭)
	//input name, actor

	for (int i = 0; i < 3; i++)
	{
		printf("%d. movie name: ", i + 1);
		scanf("%s", movies[i].name);
		printf("%d. movie actor: ", i + 1);
		scanf("%s", movies[i].actor);
	}
	printf("------movie info------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. movie name: %s\n", i + 1, movies[i].name);
		printf("%d. movie actor: %s\n", i + 1, movies[i].actor);
		printf("\n");
	}
}