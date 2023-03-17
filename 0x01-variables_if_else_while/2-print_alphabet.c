#include <stdio.h>

/**
 * main - main function to return void argument
 *
 * Return: Always Return 0 if Successful
 */
int main(void)
{
	int i;
	int ch;

	ch = 97;
	i = 0;
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar(10);
	return (0);
}
