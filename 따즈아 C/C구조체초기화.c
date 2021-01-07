#include <stdio.h>

struct movie
{
	char name[30];
	char actor[30];
};
int main()
{
	struct movie kmovie = { "신과함깨", "하정우" };

	printf("영화제목: %s\n", kmovie.name);
	printf("영화배우: %s\n", kmovie.actor);
}