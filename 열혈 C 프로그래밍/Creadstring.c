#include <stdio.h>

int main()
{
	char str[50];
	int i = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}