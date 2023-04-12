#include "main.h"
/**
 *read_textfile - reads a text file and print to POSIX std output.
 *@filename: the file to open
 *@letters: number of letters read and print.
 *Return: numner of letters it could read and print, or 0 if
 * filename is NULL. The file can not open or read.
 * Write fails or doesn't write the amountof bytes expected.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = -1;
	ssize_t output = 0;
	char *buffer;
