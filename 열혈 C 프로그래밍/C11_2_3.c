#include <stdio.h>

int main()
{
	char str[100];
	char max = 0;
	int i;
	int len = 0;

	printf("단어 입력: ");
	scanf("%s", str);

	while(str[len] != '\0')
		len++;

	for(i = 0; i < len; i++)
	{
		if(max < str[i])
			max = str[i];
	}

	printf("가장 큰 문자는 %c \n", max);
	return 0;
}