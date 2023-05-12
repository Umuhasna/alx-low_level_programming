#include <stdio.h>
#include "main.h"

#define BUFFER 1024

/**
 * print_error - Prints error msg to standard output
 * @n: exit status
 * @msg: error msg to print
 * @filename: file name
 * @fp: return
 *
 * Return: nothing
 */
void print_error(int n, const char *msg, const char *filename, int fp)
{
	dprintf(STDERR_FILENO, msg, filename);

	if (fp >= 0)
		close(fp);

	exit(n);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: agrument vector
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char buffer[BUFFER], *file_from = argv[1], *file_to = argv[2];
	int fp_from, fp_to, nread, written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fp_from = open(file_from, O_RDONLY);
	if (fp_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from, -1);
	}
	fp_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		print_error(99, "Error: Can't write to %s\n", file_to, fp_from);
	}
	while ((nread = read(fp_from, buffer, BUFFER)) > 0)
	{
		written = write(fp_to, buffer, nread);
		if (written != nread)
		{
			print_error(99, "Error: Can't write to %s\n", file_to, fp_from);
		}
	}
	if (nread == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from, fp_to);
	}
	if (close(fp_from) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_from, fp_to);
	}
	if (close(fp_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_to, fp_from);
	}
	return (0);
}
