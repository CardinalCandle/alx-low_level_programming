#include "main.h"
/**
*
*
*
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack, *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++, n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
