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
	int file_des;
	char *buffer;
	ssize_t text_read_des, text_write_des;

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_des);
		return (0);
	}

	text_read_des = read(file_des, buffer, letters);
	if (text_read_des == -1)
	{
		close(file_des);
		free(buffer);
		return (0);
	}

	text_write_des = write(STDOUT_FILENO, buffer, text_read_des);
	if (text_write_des == -1 || text_write_des != text_read_des)
	{
		close(file_des);
		free(buffer);
		return (0);
	}

	close(file_des);
	free(buffer);
	return (text_write_des);
}
