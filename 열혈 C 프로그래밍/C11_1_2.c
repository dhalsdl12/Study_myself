#include <stdio.h>

int main()
{
	char word[] = {'G','o','o','d',' ','t','i','m','e'};
	int len = sizeof(word)/sizeof(char);
	int i;

	for(i = 0; i < len; i++)
	{
		printf("%c", word[i]);
	}
	printf("\n");
	return 0;
}