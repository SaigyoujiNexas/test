/* print_rhbombus.c */
#include <stdio.h>
#include <string.h>
#define SPACE ' '
#define CH '*'
void print_n_char(char ch, int num);

int main(void) 
{
	int length;
	scanf("%d", &length);
	getchar();
	int spaces = length - 1;
	for (int i = 1; i <= length; i++)
	{
		print_n_char(SPACE, spaces);
		print_n_char(CH, 2 * i -1);
		spaces--;
		putchar('\n');
	}
	length--;
	spaces = 1;
	for (length; length > 0; length--)
	{
		print_n_char(SPACE, spaces);
		print_n_char(CH, 2 * length - 1);
		spaces++;
		putchar('\n');
	}

	return 0;
}

void print_n_char(char ch, int num)
{
	for (int i = 0; i < num; i++)
		putchar(ch);
}

