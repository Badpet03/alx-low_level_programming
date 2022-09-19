#include "main.h"

/**
 * _atoi - Converts strint to integer
 * @s: The string to be converted
 *
 * Return: Integer value else 0
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int number;

	sign = 1;
	i = 0;
	number = 0;


	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}
	return (number * sign);
}

