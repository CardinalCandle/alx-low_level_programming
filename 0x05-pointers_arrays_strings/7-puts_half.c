#include "main.h"
#include <string.h>
#include <math.h>

/**
 * puts_half - prints last half of a string
 * starting with the first character, followed by a new line.
 * @str: string to print from
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int middle = (int) ceil(len / 2.0);
	int i = middle;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
