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
	printf("레벨을 입력하세요: ");
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
		//스트라이크 개수와 볼의 개수를 구한다.
		// 스트와 볼은 입력할때마다 계산해야하므로 반복안에서 초기화.
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
		//스트라이크의 개수와 레벨이 같으면 반복을 탈출시킨다.
		if (s == level)
			break;
		printf("%dstrike %dball\n", s, b-s);
	}
	printf("맞췄다");
}