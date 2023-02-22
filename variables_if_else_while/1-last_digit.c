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
	if (n % 10 < 5)
	{ 
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	while (n <= 6)
	{
		printf("Last digit 5 %d is %d and is less than 6 and not 0\n");
	}
		return (0);
}
