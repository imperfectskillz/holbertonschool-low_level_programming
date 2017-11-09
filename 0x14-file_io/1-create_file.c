#include "holberton.h"

/**
 *create_file - creates name of the file
 *@filename: name of file
 *@text_content: text to be inserted
 *Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int create;
	int fwrite;
	int length = 0;

	if (filename == NULL)
		return (-1);

	create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (create == -1)
		return (-1);

	while (text_content[length] != '\0')
		length++;

	fwrite = write(create, text_content, length);

	close(create);
	return (1);
}
