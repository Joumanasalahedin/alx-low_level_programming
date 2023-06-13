#include "main.h"

/**
  * file_error - print error message
  * @file_from: file_from
  * @file_to: file_to
  * @argv: arguments vector
  */

void file_error(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
  * main - copies the content of a file to another file
  * @argc: number of arguments
  * @argv: arguments vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_err;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(fd_from, fd_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_from, buffer, 1024);
		if (nchars == -1)
			file_error(-1, 0, argv);
		
		nwr = write(fd_to, buffer, nchars);
		if (nwr == -1)
			file_error(0, -1, argv);
	}
	
	close_err = close(fd_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_err = close(fd_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
