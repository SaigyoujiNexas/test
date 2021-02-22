int bsort(int* num, int n)
{
	bool ju;
	int i, j, k = 0;
	for (i = 0; i < n; i++)
	{
		ju = 1;
		for (j = 0; j < n - 1; j++)
		{
			if (*(num + j) > *(num + j + 1))
			{
				*(num + j) += *(num + j + 1);
				*(num + j + 1) = *(num + j) - *(num + j + 1);
				*(num + j) = *(num + j) - *(num + j + 1);
				k++;
				ju = 0;
			}
		}
		if (ju)
			break;
	}
	return k;  //返回排序次数
}


			

