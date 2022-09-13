#include <stdio.h>
include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase
 *
 * Return: x10 a-z 
 *
 */
void print_alphabet_10x(void)
{
	int n, co;

	co = 0;


	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			__putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
