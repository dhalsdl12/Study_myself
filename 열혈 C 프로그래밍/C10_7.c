#include <stdio.h>

int main()
{
	int n;
	int i;
	int k = 1;

	printf("��� n �Է�: ");
	scanf("%d", &n);

	for(i = 1;;i++)
	{
		k *= 2;
		if(k < n)
			continue;
		else
		{
			printf("������ �����ϴ� k�� �ִ��� %d\n", i);
			break;
		}
	}
}