#include <stdio.h>

int main()
{
	char name1[] = "kim";
	char name2[] = "park";

	//char names[1���� �迭�� ����][�� 1���� �迭�� ���� ����]
	char names[2][10] = {
		{"kim"},
		{"park"}
	};

	printf("ù��° �̸�: %s\n", names[0]);
	printf("�ι�° �̸�: %s\n", names[1]);
}