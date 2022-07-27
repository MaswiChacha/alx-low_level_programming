#include "main.h"

/**
 * _isdigit -looks for a number (0-9)
 * @c: The number to be looked at
 *
 * Return: 1 if the number is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
