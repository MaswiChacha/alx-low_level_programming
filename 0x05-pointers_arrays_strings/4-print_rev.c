#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @c: The string to be printed.
 */
void print_rev(char *c)
{
	int len = 0, index;

	while (c[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(c[index]);

	_putchar('\n');
}
