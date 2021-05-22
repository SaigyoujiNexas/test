int InsertionSort(int * array, int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = array[i];
		for(j = i - 1; j >= 0 && array[j] < key; j--)
			array[j + 1] = array[j];
		array[j + 1] = key;
	}
}
