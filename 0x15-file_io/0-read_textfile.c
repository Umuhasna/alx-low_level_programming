#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: On success actual number of letters it could read and print,
 * on failure 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp, c_read, c_write;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	c_read = read(fp, buf, letters);
	if (c_read == -1)
		return (0);

	c_write = write(STDOUT_FILENO, buf, c_read);
	if (c_write == -1)
		return (0);
	close(fp);
	free(buf);

	return (c_read);
}
