#include <stdio.h>

/**
 * main - main function containing all fnctions
 *
 * Return: Always return 0 if successful
 */
int main(void)
{
	int i;
	int ch;

	ch = 122;
	i = 26;
	while (i > 0)
	{
		putchar(ch);
		ch--;
		i--;
	}
	putchar(10);
	return (0);
}
