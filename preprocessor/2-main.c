#include <stdio.h>
#ifdef __FILE__
/**
 * main - entry
 * return: 0
 */
int main (void)
{
	printf("__FILE__%s\n", __FILE__);
	return 0;
}
