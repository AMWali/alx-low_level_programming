#include <stdio.h>

/**
 * main - main function calling other functions
 *
 * Return: Always return 0 if (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
				{
					putchar(10);
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
