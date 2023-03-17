#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always returns 0 when successful
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar(10);
	return (0);
}
