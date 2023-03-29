#include "main.h"
/**
* _strcat - concatenates two strings.
* @dest: destination string
* @src: source string
* Return: new string
*/
char *_strcat(char *dest, char *src)
{
	char *res = (char*) malloc(100 * sizeof(char));
	int i = 0, j = 0;

	while(dest[i] != '\0')
	{
		res[j++] = dest[i++];
	}
	i = 0;
	while(src[i] != '\0')
	{
		res[j++] = src[i++];
	}
	res[j] = '\0';
	*dest = *res;
	return (res);
}
