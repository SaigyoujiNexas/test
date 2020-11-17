#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != '#') //# to quit
	{
		putchar(ch);
		printf("-%d ", (int)ch);
		i++;
		if (0 == i % 8)
		{
			putchar('\n');
		}
	}
	return 0;
}
