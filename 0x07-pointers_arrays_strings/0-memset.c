#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: address to a memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
