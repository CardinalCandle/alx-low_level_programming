#include "main.h"
#include <string.h>

/**
* puts_half - prints last half of a string
* starting with the first character, followed by a new line.
* @str: string to print from
*/
void puts_half(char *str)

{

int len = strlen(str);
int middle = len / 2;
int i = middle;

if (len % 2 == 1)

{

middle += 1;

}

for (; i < len; i++)

{

_putchar(str[i]);

}
_putchar('\n');

}
