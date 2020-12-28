/* to_base.c -- 以二到十进制打印整数*/
#include <stdio.h>
void to_base_n(unsigned long n, int p);

int main(void)
{
	unsigned long number;
	int base;
	printf("Enter an integer (q to quit):\n");
	while (scanf_s("%lu", &number) == 1)
	{
		printf("PLease enter base value:(2 to 10)");
		while ((scanf_s("%d", &base)) != 1 || base < 2 || base > 10)
		{
			while (getchar() != '\n')
				continue;
			printf("You entered wrong value, Please enter right number:");
			scanf_s("%d", &base);
		}
		{
			printf("The answer is: ");
			to_base_n(number, base);
			putchar('\n');
			printf("Enter an integer (q to quit): \n");
		}
	}
	printf("Done.\n");
	return 0;
}

void to_base_n(unsigned long n, int p)
{
	int r;

	r = n % p;
	if (n >= p)
		to_base_n(n / p, p);
	printf("%d", r);
	return;     
}
