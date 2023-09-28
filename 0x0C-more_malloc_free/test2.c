#include "main.h"

/**
 * print_error - prints error message and exits
 */
void Error(void)
{
printf("Error\n");
exit(98);
}

/**
 * is_digit - checks if string contains only digits
 * @str: string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * _calloc - allocates memory and initializes it to zero
 * @nmemb: number of elements to allocate
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);

memset(ptr, 0, nmemb * size);
return (ptr);
}

/**
 * main - multiply 2 positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, otherwise 98
 */
int main(int argc, char **argv)
{
	char *s1, *s2;
	int l1 = 0, l2 = 0, *a, *b, *p, i, j, c;

	if (argc != 3 || !is_digit(argv))
	{
		Error();
	}

	s1 = argv[1], s2 = argv[2];
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	a = malloc(l1 * sizeof(int));
	b = malloc(l2 * sizeof(int));
	p = _calloc(l1 + l2 + 1, sizeof(int));

	if (!a || !b || !p)
	{
		Error();
	}

	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = s1[i] - '0';

	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = s2[i] - '0';

	for (i = 0; i < l2; i++)
		for (j = 0; j < l1; j++)
			p[i + j] += b[i] * a[j];

	for (i = 0; i < l1 + l2; i++)
		c = p[i] / 10, p[i] %= 10, p[i + 1] += c;

	for (i = l1 + l2; i >= 0; i--)
		if (p[i] > 0)
			break;

	for (; i >= 0; i--)
		putchar(p[i] + '0');

	putchar('\n');

	free(a), free(b), free(p);

	return (0);
}

