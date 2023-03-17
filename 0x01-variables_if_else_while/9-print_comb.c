#include <stdio.h>
/**
 * main - main function calling other functions
 *
 * Return: Always return 0 if (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}

