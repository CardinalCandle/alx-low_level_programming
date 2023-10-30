#include "main.h"
/**
 * error_file - Checks if files can be opened.
 * @file_from: self explanatory.
 * @file_to: as above.
 * @argv: arg vector.
 * Return: none.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == ERR_RETURN)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == ERR_RETURN)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program check the code for ALX AFRICA SE students.
 * @argc: arg count.
 * @argv: arg vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwrite;
	char buffer[NCHAR];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = NCHAR;
	while (nchars == NCHAR)
	{
		nchars = read(file_from, buffer, NCHAR);
		if (nchars == ERR_RETURN)
			error_file(ERR_RETURN, 0, argv);
		nwrite = write(file_to, buffer, nchars);
		if (nwrite == ERR_RETURN)
			error_file(0, ERR_RETURN, argv);
	}

	err_close = close(file_from);
	if (err_close == ERR_RETURN)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == ERR_RETURN)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		exit(100);
	}
	return (0);
}

