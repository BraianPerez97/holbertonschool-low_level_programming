#include "main.h"
/**
 * puts2 - entry.
 * description: print every other character.
 * @x: input
 * return: print.
 */
void rev_string(char *s)
{
	int x = 0, y, z;
	char *str, temp;

	while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}
	str = s;

	for (y = 0; y < (x - 1); y++)
	{
		for (z = y + 1; z > 0; z--)
		{
			temp = *(str + z);
			*(str + z) = *(str + (z - 1));
			*(str + (z - 1)) = temp;
		}
	}
}
