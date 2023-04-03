#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: string
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 1;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			count += (accept[i] == s[j] ? 1 : 0);
		}
		j = 0;
	}
	return (count);
}
