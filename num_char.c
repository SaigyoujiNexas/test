#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int n_space = 0, n_enter = 0, n_other = 0;
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			n_enter++;
		else if (' ' == ch)
			n_space++;
		else
			n_other++;
	}
	printf("You entered %d space, %d enter and %d other words", n_space, n_enter, n_other);
		return 0;
}

