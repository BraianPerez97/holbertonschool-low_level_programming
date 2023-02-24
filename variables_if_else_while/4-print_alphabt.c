 #include <stdio.h>
/**
*main - Entry.
*
*Description: checks the remaining values.
*Return: Always 0.
*/

int main(void)
{
	char x,  q, e;

	q = 'q';
	e = 'e';
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != q && x != e)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
