#include "main.h"

/**
 * _isupper -looks for for uppercase letters
 * @c: The letter to be lood at
 *
 * Return: 1 if letter is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
