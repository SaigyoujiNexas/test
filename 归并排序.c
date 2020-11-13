#include<stdio.h>
int main(void)
{
	int a[8];
	int b, c, d, e, i, k;
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 8; i += 2)
	{
	if(a[i] > a[i+1] )
	{
		k=a[i];
		a[i]= a[i+1];
		a[i+1]= k;
	}
	for (i = 0, i < 8; i+=4)
	{
		b = 3;
			if(a[i] > a[b])
			{
				a[i] = a[i] + a[b - 1];
				a[b - 1] = a[i] - a[b - 1];
				a[i] = a[i] - a[b - 1];
				a[i + 1] = a[i + 1] + a[b];
				a[b] = a[i + 1] - a[b];
				a[i + 1] = a[i + 1] - a[b];
				continue;
			}
			else if
				
			
		}
		for(b;b)
