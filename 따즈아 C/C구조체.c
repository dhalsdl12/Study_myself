#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//선생님의 신상정보 구조체 저장
//필드: 이름, 주소, 전화번호, 강의과목, 생일
struct teacher
{
	char name[11];
	char address[30];
	char tel[11];
	char lesson[20];
	long birth;
};

void main()
{
	struct teacher tear; //구조체 변수 생성 tear

	printf("sizeof(struct teacher): %d\n", sizeof(struct teacher));
	printf("sizeof(tear): %d\n", sizeof(tear));
	printf("%p\n", &tear);

	printf("%d\n", sizeof(long));
	
}
