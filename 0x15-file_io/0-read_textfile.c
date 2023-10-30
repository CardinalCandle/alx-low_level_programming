#include "main.h"

/**
 * read_textfile - program reads a file and prints
 * @filename: pretty descriptive.
 * @letters: also pretty descriptive.
 * Return: numbers of printed letters. Else, 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nrd;
	ssize_t nwrite;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file <= ERR_RETURN)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(file, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nrd);
	close(file);
	free(buffer);
	return (nwrite);
}
