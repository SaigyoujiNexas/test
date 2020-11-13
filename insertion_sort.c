#include <stdio.h>
int main()
{
	int a[10];
	int b, i, c, d;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		getchar();
	}
	for (i = 1; i < 10; i++)
	{
		for (b = i - 1; b >= 0; b--)
		{
		if (a[b] > a[i] && a[b - 1] <= a[i]) 
			{
				d = a[i];
				for (c = i; c > b; c--)
				{
					a[c] = a[c - 1];
				}
				a[b] = d;break;
			}
		}
	}
			for (i = 0; i < 10; i++)
			{
				printf("%d ", a[i]);
			}
		return 0;
}
