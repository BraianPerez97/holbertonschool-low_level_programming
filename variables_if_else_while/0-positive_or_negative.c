#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*
*Description: function evaluating the value of n.
*Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	if else(n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
