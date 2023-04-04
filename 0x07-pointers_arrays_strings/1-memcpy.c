#include "main.h"
#include <stdio.h>
/**
*_memcpy - function that copies memory area.
*@dest: pointer to destination location
*@src: pointer to source location
*@n: number of bits to copy
*
*Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
