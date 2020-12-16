#include <stdio.h>

int god(int n1, int n2)
{
	if(n1 < n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	else if( n1 == n2)
	{
		return n1;
	}
	
	while(n2 != 0)
	{
		int temp2 = n2;
		n2 = n1%n2;
		n1 = temp2;
	}
	return n1;
}

int main()
{
	int n1, n2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	printf("두 수의 최대공약수: %d\n", god(n1, n2));
	return 0;
}