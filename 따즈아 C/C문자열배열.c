#include <stdio.h>

int main()
{
	char name1[] = "kim";
	char name2[] = "park";

	//char names[1차원 배열의 개수][각 1차원 배열의 변수 개수]
	char names[2][10] = {
		{"kim"},
		{"park"}
	};

	printf("첫번째 이름: %s\n", names[0]);
	printf("두번째 이름: %s\n", names[1]);
}