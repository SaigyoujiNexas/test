#include <stdio.h>

int main(void)
{
	int a[10];
	int b, c, d, e, i;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		getchar();
	}
	for (i = 0; i < 10; i++)
	{
		for(b = 0; b < 10; b++)
		{
		if (a[i] < a[b])
			{
				a[i] = a[i] + a[b];
				a[b] = a[i] - a[b];
				a[i] = a[i] - a[b];
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}


			

