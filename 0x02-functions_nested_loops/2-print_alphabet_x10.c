#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char n;

	while (count++ <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)

		_putchar(n);
		_putchar('\n');
	}
}
