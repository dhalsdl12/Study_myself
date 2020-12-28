#include "head.h"

int main()
{
	int lotto[45];

	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}
	for (int i = 0; i < 45; i++)
	{
		printf("%3d", lotto[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	
	printf("\n=======공을 섞는다=======\n");


	// 0의 값과 1~44의 랜덤한 위치와 값을 교환시킨다.
	srand(time(NULL));  //랜덤 초기화

	for (int i = 0; i < 1; i++)
	{
		int r = rand() % 44;
		int temp = lotto[0];
		lotto[0] = lotto[r];
		lotto[r] = temp;

		//swap(lotto[0], lotto[r]);  //두 기억장소의 값을 교환
	}
	for (int i = 0; i < 45; i++)
	{
		printf("%3d", lotto[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}