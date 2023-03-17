#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always return 0 if sucessful
 */
int main(void)
{
	int i;
	int ch;

	ch = 97;
	i = 0;
	while (i < 26)
	{
		if ((ch != 101) && (ch != 113))
		{
			putchar(ch);
			ch++;
			i++;
		}
		else
		{
			ch++;
			i++;
		}
	}
	putchar(10);
	return (0);
}
