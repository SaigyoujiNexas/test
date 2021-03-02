void margesort(double num[], int start, int end)//主递归程序
{
	int i;
	if (start < end)
	{
		i = (start + end) / 2;
		margesort(num, start, i);//并行二叉树
		margesort(num, i + 1, end);
		process(num, start, i + 1, end);
	}
	return;
}

void process(double num[], int left, int middle, int right)
{
	double arr[N] = {0};
	int i, j, k;
	for (i = left, j = middle, k = 0; k <= (right - left); k++)
	{
		//第一数组分配完毕
		if (i == middle)
		{
			arr[k] = num[j++];
			continue;
		}
		//第二数组分配完毕
		if (j == right + 1)
		{
			arr[k] = num[i++];
			continue;
		}
		//正常分配
		if (num[i] < num[j])
			arr[k] = num[i++];
		else
			arr[k] = num[j++];
	}
	//刷入
	for (i = 0, j = left; j <= right; i++, j++)
	{
		num[j] = arr[i];
		
	}
		return;
}
