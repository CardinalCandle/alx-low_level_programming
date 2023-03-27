#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
* keygen - generates a password
* Return: password
*/
char *keygen(void)
{
	time_t t;
	char *str = malloc(64);
	int i, len = strlen(str);
	for (i = 0; i < len; i++)
	{
		srand((unsigned) time(&t));
		str[i] = rand() % 255 ;
	}
	return (str);
}
/**
* main - entry point.
* Return: 0.
*/
int main(void)
{
	keygen();
	return (0);
}
