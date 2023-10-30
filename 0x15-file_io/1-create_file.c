#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 * Return: 1 for success. -1 for fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rwrite;

	if (!filename)
		return (ERR_RETURN);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == ERR_RETURN)
		return (ERR_RETURN);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwrite = write(file, text_content, nletters);

	if (rwrite == ERR_RETURN)
		return (ERR_RETURN);

	close(file);

	return (1);
}
