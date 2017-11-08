#include "holberton.h"

/**
 *read_textfile - reads a text file then prints
 *@filename: name of file
 *@letters: number of letters
 *Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int OP, RD, WR;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	OP = open(filename, O_RDONLY);
	if (OP == -1)
		return (0);

	RD = read(OP, buffer, letters);
	if (RD == -1)
		return (0);

	WR = write(STDOUT_FILENO, buffer, RD);

	close(OP);
	return (WR);
}
