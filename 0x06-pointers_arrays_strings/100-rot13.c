#include "main.h"
/*
* rot13 - do thing
* @str: str
* Return: str
*/
char *rot13(char *str)
{
	int i, j;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		if ((ch >= 'a' && ch <= 'm') || (ch >= 'A' && ch <= 'M'))
		{
			ch += 13;
		}
		else if ((ch >= 'n' && ch <= 'z') || (ch >= 'N' && ch <= 'Z'))
		{
			ch -= 13;
		}
		str[i] = ch;
	}
	return str;
}
