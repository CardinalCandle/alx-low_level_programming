#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>

/**
* _islower - checks for lowercase characters
*
* Return: 0
*/
int _islower(int c)
{
unsigned char a = (unsigned char) c;
return (islower(a));
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
