#include <stdio.h>
int main()
{
	int a[10];
	int b, i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		getchar();
	}
	for (i = 1; i < 10; i++)
	{
		for (b = i - 1; b >= 0; b--)
		{
			if (a[b] < a[i])
			{
				a[b] = a[b] + a[i];
				a[i] = a[b] - a[i];
				a[b] = a[b] - a[i];
			}
		}
			for (i = 0; i < 10; i++)
			{
				printf("%d ", a[i]);
			}
		return 0;
	}
}
