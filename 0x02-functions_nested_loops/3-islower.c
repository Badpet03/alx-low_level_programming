#include "main.h"

/**
 * _islower - Entry point
 * _islower - Checks if a character is lowercase.
 * c: the integer value it receives
 *
 * Return: 1 if character is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
