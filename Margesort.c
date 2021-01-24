#include <stdio.h>
#define N 5
void sort(double num[], int start, int end);
void process(double arr[], int left, int middle, int right);
int main(void)
{
	double num[N];
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lf", &num[i]);
		getchar();
	}
	sort(num, 0, N - 1);
	for (int i = 0; i < N; i++)
		printf("%.1lf ", num[i]);
	return 0;
}

void sort(double num[],int start, int end)
{
	int i;
	if (start < end)
	{
		i = (start + end) / 2;
		sort(num, start, i);
		sort(num, i + 1, end);
		process(num, start, i + 1, end);
	}
	return;
}

void process(double arr[], int left, int middle, int right)
{
	double arruse[N] = {0};
	int i, j, k;
	for (i = left, j = 0, k = middle; j <= (right - left); j++)
	{
		if (i == middle) /*当第一数组位置至末尾时*/
		{
			arruse[j] = arr[k++];
			continue;
		}
		if (k == right + 1) /*第二数组位置到末尾时*/
		{
			arruse[j] = arr[i++];
			continue;
		}
		if (arr[i] < arr[k]) /*第一数组位置大小小于第二数组位置大小时， 把第一数组数据挪入临时数组*/
			arruse[j] = arr[i++];
		else
			arruse[j] = arr[k++];
	}
	/*临时数组数据刷入源数组*/
	for (i = 0, j = left; j <= right; j++, i++)
	{
		printf("%.1lf ", arruse[i]);
		arr[j] = arruse[i];
	}
	putchar('\n');
}
