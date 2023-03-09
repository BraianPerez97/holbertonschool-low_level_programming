#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int x = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + x) != '\0')
	{
		if (size > 0 && (*(s + x) < '0' || *(s + x) > '9'))
			break;

		if (*(s + x) == '-')
			pn *= -1;

		if ((*(s + x) >= '0') && (*(s + x) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		x++;
	}

	for (i = x - size; i < x; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

