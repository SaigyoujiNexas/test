#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf("Enter a number and the positive integer power");
	printf("to which\nthe number will be raisd. Enter q to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the powwer %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0)
	{
		return 0;
	}
	else
	{
		if (p == 0)
			return n;
		else
		{
			if (p < 0)
			{
				n = 1 / n;
				p = -1 * p;
			}
			for (i = 1; i <= p; i++)
				pow *= n;
			return pow;
		}
	}
}
