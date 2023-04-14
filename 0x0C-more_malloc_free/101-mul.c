#include "main.h"

/**
* Error - do thing
* Return: nuthin
*/
void Error(void)
{
	printf("Error");
	exit(98);
}

/**
* is_digit - do thing
* @grid: arr
* Return: 1 or 0
*/
int is_digit(char **grid)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; grid[i][j]; j++)
		{
			if (grid[i][j] < '0' || grid[i][j] > '9')
				return (0);
		}
	return (1);
}

/**
* _calloc - do thing
* @nmemb: int
* @size: int
* Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (0);

	a = malloc(nmemb * size);
	if (!a)
		return (0);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}

/**
* main - main entry
* @argc: int
* @argv: chars
* Return: always 0 (Success)
*/
int main(int argc, char **argv)
{
	int i, j, c, l1 = 0, l2 = 0;
	char *s1 = argv[1], *s2 = argv[2];
	int *a, *b, *p;
	int size = sizeof(int);

	if (argc != 3 || is_digit(argv) != 1)
		Error();
	if (*s1 == '0' || *s2 == '0')
		putchar('0');
	while (*(argv[1] + l1))
		l1++;
	while (*(argv[2] + l2))
		l2++;
	a = malloc(l1 * size);
	b = malloc(l2 * size);
	p = _calloc(l1 + l2 + 1, size);
	if (!a || !b || !p)
		Error();
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

