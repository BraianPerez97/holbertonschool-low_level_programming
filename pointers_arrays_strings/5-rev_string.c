#include "main.h"
/**
 * rev_string(char *s) - entry.
 * @s: input
 * return: string
 */
void rev_string(char *s)
{
	char a = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++;

	for (y = 0; y < x; y++)
	{
		x--;
		a =s[y];
		s[y] = s[x];
		s[x] = a;
	}
}
