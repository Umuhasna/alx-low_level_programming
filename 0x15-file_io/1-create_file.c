#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, c;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		c = write(fp, text_content, strlen(text_content));
		if (c == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
