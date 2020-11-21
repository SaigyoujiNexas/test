#include <stdio.h>
int main(void)
{
	unsigned long num;
	double ch;
	printf("please enter a integer number:");
	if (scanf("%lf", &ch) != 0)
	{
		num = ch;
		if (num == ch && ch > 0)
		{
			if (num >= 2)
				printf("2\t");
			if (num >= 3)
				printf("3\t");
			for (long long i = 2; i <= num; i++)
			{
				for (long long j = 2; j <= i / 2; j++)
				{
					long long aim = i % j;
					if (aim == 0)
					{
						break;
					}
					if (j == (long long int)(i / 2) && aim != 0)
						printf("%lld\t", i);
				}
			}
		}
		else
			printf("please enter positive integer");
	}
	else
		printf("please  enter number");
	return 0;
}
