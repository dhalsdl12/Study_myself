#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void tel_find(char *);
int main()
{
	char name[100];
	int a;

	printf("검색할 이름: ");
	scanf("%s", name);
	tel_find(name);


}
void tel_find(char *find_name)
{
	char *name[10] = { "홍동만","최민주","민영진" }; //문자형 포인터 배열
	char *tel[10] = { "2222-1123","1004-1004","9999-1234" };
	int i;

	for (i = 0; i < 3; i++)
	{
		if (!strcmp(name[i], find_name)) //두문자열이 같을때 실행할 조건문
		{
			printf("%s의 전화번호는 %s입니다\n", name[i], tel[i]);
			return;
		}
	}
	printf("%s의 연락처가 없습니다.\n", find_name);
}