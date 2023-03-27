#include "main.h"
#include <string.h>
/**
* puts_half - prints last half of  character of a string,
* starting with the first character, followed by a new line.
* @str: string to print from
*/
void puts_half(char *str)
{
	int i = (strlen(str) - 1) / 2, c = strlen(str);

	for (; str[i] != '\0' ; )
	{
		_putchar(str[++i]);
	}
	_putchar('\n');
}
