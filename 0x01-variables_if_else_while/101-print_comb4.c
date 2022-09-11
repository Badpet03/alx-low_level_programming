#include <stdio.h>
#include <stdlib.h>

/**
 * main - print triple combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, f, g;

	for (i = '0'; i <= '9'; i++)
	{
		for (f = i + 1; f <= '9'; f++)
		{
			if ((f != i) != g)
			{
				putchar (i);
				putchar (f);
				putchar (g);

				if (i == '7' && f == '8')
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
