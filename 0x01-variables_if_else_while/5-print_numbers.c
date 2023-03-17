#include <stdio.h>

/**
 * main - main function containing main and returning voind argument
 *
 * Return: Always return 0 when successful
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
