#include <stdio.h>
#include <ctype.h>
#include "main.h"

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
