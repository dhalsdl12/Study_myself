#include <stdio.h>

int main()
{
	int ar[5] = { 1,2,3,4,5 };
	int *par = ar;  //ar == &ar[0]
	int **dbpar = &par;   //&ar�� �ȵǴ� ���� : ���� ������ = &������;
						// ���������� = &�迭�� �Ҽ��� ����.
						// �迭���� �����Ͱ� �ƴϴ�
						// �迭�� == &�迭[0]
						// dbpar = &ar; ���
						// *dbpar = ar;
						// **dbpar = *ar;
	//���������� = &������!!!!! �迭�� �����Ͱ� �ƴϴ�


	printf("ar = %d\n", ar);
	printf("&ar = %d\n", &ar);
	printf("&par = %d\n", &par);
	printf("\n");
	printf("ar[0] = %d\n", ar[0]);
	printf("*par = %d\n", *par);
	printf("**dbpar = %d\n", **dbpar);
}