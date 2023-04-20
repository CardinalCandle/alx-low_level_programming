#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string
 * @n: argc
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	while (i < n)
	{
		if (separator == NULL || i == n - 1)
			printf("%s", va_arg(ap, char *));
		else
		{
			str = va_arg(ap, char *);
			printf("%s%s", (str) ? str : "(nil)", separator);
		}
	i++;
	}
	va_end(ap);
	putchar('\n');
}
