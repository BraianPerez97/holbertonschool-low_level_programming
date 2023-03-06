#include "main.h"
/**
 * more_numbers - function
 * description: print 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int x, y;
	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			y++;
		}
		x++;
		_putchar('\n');
	}
}
