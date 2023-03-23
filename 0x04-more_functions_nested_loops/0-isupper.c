#include "main.h"
/**
* _isupper - similar ro isupper function in std library
* @c: integer
* Return: 1 if true, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
