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
	
	printf("\n=======���� ���´�=======\n");


	// 0�� ���� 1~44�� ������ ��ġ�� ���� ��ȯ��Ų��.
	srand(time(NULL));  //���� �ʱ�ȭ

	for (int i = 0; i < 1; i++)
	{
		int r = rand() % 44;
		int temp = lotto[0];
		lotto[0] = lotto[r];
		lotto[r] = temp;

		//swap(lotto[0], lotto[r]);  //�� �������� ���� ��ȯ
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