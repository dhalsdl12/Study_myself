#include <stdio.h>

int main()
{
	// &������: ������ �ּ�
	int a[3];

	printf("a = %d\n", &a);
	printf("a = %d\n", a);   //������
	printf("a[0] = %d\n", &a[0]);
	printf("a[1] = %d\n", &a[1]);
	printf("a[2] = %d\n", &a[2]);

	printf("sizeof(a) = %d\n", sizeof(a)); //sizeof(����): ���� �� ����Ʈ?
}