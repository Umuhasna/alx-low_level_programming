#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints error msg to standard output
 * @n: exit status
 * @msg: error msg to print
 * @filename: the file name
 * @fd: return of system calls
 *
 * Return: void
 */
void print_error(int n, const char *msg, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, msg, filename);

	if (fd >= 0)
		close(fd);

	exit(n);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of argument
 * @argv: arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE], *file_from = argv[1], *file_to = argv[2];
	int fd_from, fd_to, n_read, n_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from, -1);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error(99, "Error: Can't write to %s\n", file_to, fd_from);
	}
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written != n_read)
		{
			print_error(99, "Error: Can't write to %s\n", file_to, fd_from);
		}
	}
	if (n_read == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from, fd_to);
	}
	if (close(fd_from) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_from, fd_to);
	}
	if (close(fd_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_to, fd_from);
	}
	return (0);
}
