#include "main.h"

/**
 * append_text_to_file - program appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 file exists. -1 if the file doesn't exist (or fails)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rwrite;

	if (!filename)
		return (ERR_RETURN);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == ERR_RETURN)
		return (ERR_RETURN);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwrite = write(file, text_content, nletters);

		if (rwrite == ERR_RETURN)
			return (ERR_RETURN);
	}

	close(file);

	return (1);
}
