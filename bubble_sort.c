#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int a[10];
	int i, j;
	bool ct;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		getchar();
	}
	for (i = 0; i < 10; i++)
	{
		ct = false;
		for(j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				a[j] += a[j + 1];
				a[j + 1] = a[j] - a[j + 1];
				a[j] -= a[j + 1];
				ct = true;
			}
		}
		if (!ct)
			break;
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	getchar();
	return 0;
}


			

