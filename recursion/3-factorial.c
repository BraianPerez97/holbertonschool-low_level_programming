#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number to calculate the factorial
 * Return: Result of factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (n * factorial(n - 1));
}
