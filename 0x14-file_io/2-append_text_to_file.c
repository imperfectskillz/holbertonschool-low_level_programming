#include "holberton.h"

/**
 *append_text_to_file - appends text
 *@filename: name of file
 *@text_content: text
 *Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int create;
	int fwrite;
	int length = 0;

	if (filename == NULL)
		return (-1);

	create = open(filename, O_WRONLY | O_APPEND);

	if (create == -1)
		return (-1);

	while (text_content[length] != '\0')
		length++;

	fwrite = write(create, text_content, length);
	if (fwrite == -1)
		return (-1);

	close(create);
	return (1);
}

