#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Program that prints the result  that multiplies two numbers.
  * @argc: count
  * @argv: array
  *
  * Return: Always 0
  **/
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (argc > 1)
{
	for (i = 1; i < argc; i++)
{
	mul *= atoi(argv[i]);
}
	printf("%d\n", mul);
}
return (0);
}
