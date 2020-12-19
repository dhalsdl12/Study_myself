#include <stdio.h>

int main()
{
	char str[50];
	int i = 0;

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}