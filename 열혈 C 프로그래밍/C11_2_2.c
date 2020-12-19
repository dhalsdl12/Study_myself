#include <stdio.h>

int main()
{
	char str[100];
	char temp;
	int i;
	int len = 0;

	printf("단어 입력: ");
	scanf("%s", str);
	
	while(str[len] != '\0')
		len++;

	for(i = 0; i < len/2; i++)
	{
		temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}

	printf("%s\n",str);
}