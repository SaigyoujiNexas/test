#include<stdio.h>
int main(void)
{
	int a, b, c, d, e, i;
	scanf("%d", &a);
	getchar();
	b = (2 * a - 1) / 2;
	d = 1;
	for (i = 0; i < a; i++)
	{
		for (c = 0; c < b; c++)
		{
			printf(" ");
		}
		b--;
		for (e = 0; e < d; e++)
		{
			printf("#");
		}
		d += 2;
		putchar('\n');
	}
	d = d - 4;
	b = b + 2;
	for (i = 0; i < a - 1; i++)
	{
		for (c = 0; c < b; c++)
		{
			printf(" ");
		}
		b++;

		for (e = 0; e < d; e++)
		{
			printf("#");
		}
		d -= 2;
		putchar('\n');
	}
	return 0;


}

