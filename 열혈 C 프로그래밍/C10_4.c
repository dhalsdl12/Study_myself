#include <stdio.h>

int main()
{
	int i, j, k;
	int money = 3500;
	int cream = 500;
	int shrimp = 700;
	int coke = 400;
	money = money - cream - shrimp - coke; //1900won

	for(i = 0; i < money / coke ; i++)
	{
		for(j = 0; j < money / coke ; j++)
		{
			for(k = 0; k < money / coke ; k++)
			{
				if(cream*i + shrimp*j + coke*k == money)
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", i+1, j+1, k+1);
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?\n");
}