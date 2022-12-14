#include "mian.h"

/**
 * print_alphabet - Entry point
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_Putchar(c);
		c++;
	}
	_putchar ('\n');
}
