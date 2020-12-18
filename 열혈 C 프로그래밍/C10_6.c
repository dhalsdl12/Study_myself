#include <stdio.h>

int main()
{
	int time;
	int second, min, hour;

	printf("รส(second) ภิทย: ");
	scanf("%d", &time);

	second = time%60;
	min = (time/60)%60;
	hour = (time/60)/60;

	printf("[h: %d, m: %d, s: %d]\n", hour, min, second);
}