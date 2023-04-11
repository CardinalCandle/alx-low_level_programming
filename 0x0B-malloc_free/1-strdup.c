#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter
* @str: string
* Return: ptr
*/
char *_strdup(char *str)
{
	int i = 0, len = strlen(str);
	char *new = malloc((sizeof(char)  * len) - 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (new)
	{
		while (i < len)
		{
			new[i] = str[i];
			i++;
		}
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
