#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- assign random number to variable
 * return: always (0)
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{ 
		printf("and is greater than 5, \n");
	}
	else if (n == 0)
	{
		printf("and is 0, \n");
	}
	while (n <= 6)
	{
		printf("and is less than 6 and not 0,\n");
	}
		return (0);
}
