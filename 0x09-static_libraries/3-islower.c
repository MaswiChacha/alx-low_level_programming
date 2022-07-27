#include "main.h"
/**
 *_islower -should check if a character is in lowercase.
 *@c: The character to be looked at
 *
 * Return: 1 if character is lowercase,0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
			return (1);
	else
		return (0);
}
