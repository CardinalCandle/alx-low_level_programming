#include "main.h"
#include <string.h>
/**
* rev_string - reverses a string
* @s: string to reverse
*/
void rev_string(char *s)
{
	int c = strlen(s);
	char str[c + 1];

	for (int i = 0, j = 0; i < c ;)
	{
		str[i++] = s[j--];
	}
	str[i] = '\0'
}
