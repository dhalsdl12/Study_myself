#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char word[100];
	int cnt = 0;

	printf("�ܾ� �Է�: ");
	scanf("%s", word);

	while(word[cnt] != 0)
		cnt++;

	printf("����: %d \n", cnt);
}