#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always successful
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
