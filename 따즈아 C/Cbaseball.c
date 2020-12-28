#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int ball[] = { 0,1,2,3,4,5,6,7,8,9 };

	srand(time(NULL));
	for (int i = 0; i < 1000000; i++)
	{
		int r = rand() % 9 + 1;
		int temp = ball[0];
		ball[0] = ball[r];
		ball[r] = temp;
	}
	int level;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &level);

	printf("CPU: ");
	for (int i = 0; i < level; i++)
	{
		printf("%d", ball[i]);
	}
	printf("\n");

	while (1)
	{
		printf("user: ");
		int user;
		scanf("%d", &user);
		//��Ʈ����ũ ������ ���� ������ ���Ѵ�.
		// ��Ʈ�� ���� �Է��Ҷ����� ����ؾ��ϹǷ� �ݺ��ȿ��� �ʱ�ȭ.
		int s = 0, b = 0;

		for (int i = level - 1; i >= 0; i--)
		{
			if (ball[i] == user % 10)
				s++;
			for (int j = 0; j < level; j++)
			{
				if (ball[j] == user % 10)
					b++;
			}
			user /= 10;
		}
		//��Ʈ����ũ�� ������ ������ ������ �ݺ��� Ż���Ų��.
		if (s == level)
			break;
		printf("%dstrike %dball\n", s, b-s);
	}
	printf("�����");
}