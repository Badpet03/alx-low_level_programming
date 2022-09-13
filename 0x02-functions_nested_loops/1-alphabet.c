#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);

	_putchar('\n');
}
