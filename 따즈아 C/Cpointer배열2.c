#include <stdio.h>

int main()
{
	int a[5] = { 10,20,30,40,50 };
	int *ptr;
	ptr = a; //ptr = &a[0];  a==&a[0]
	//a�� a[0]�� �ּҰ� ������ �׳� ���̸� �����ش�

	printf("ptr: %d\n", *ptr);
	printf("ptr: %d, &a[0]: %d\n", ptr, &a[0]);
	printf("\n");
	ptr++; //�ּҰ����� ���� �ּҰ��� ������Ų��.
	printf("ptr: %d\n", *ptr);
	printf("ptr: %d, &a[1]: %d\n", ptr, &a[1]);
}