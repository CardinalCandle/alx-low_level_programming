#include "main.h"

/**
* print_error - prints error message and exits
*/
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
* is_digit - checks if all characters in a string are digits
* @grid: string to check
* Return: 1 if all characters are digits, 0 otherwise
*/
int is_digit(char **grid)
{
int i, j;

for (i = 1; i <= 2; i++)
for (j = 0; grid[i][j]; j++)
if (grid[i][j] < '0' || grid[i][j] > '9')
return (0);
return (1);
}

/**
* _calloc - allocates memory and initializes it with zero
* @nmemb: number of elements
* @size: size of each element
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

(nmemb == 0 || size == 0) ? return (NULL), 0;

ptr = malloc(nmemb * size);
(ptr == NULL) ? return (NULL): 0;

memset(ptr, 0, nmemb * size);
return (ptr);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success
*/
int main(int argc, char **argv)
{
int i, j, carry, len1 = 0, len2 = 0, s = sizeof(int);
char *str1 = argv[1], *str2 = argv[2];
int *num1, *num2, *product;

if (argc != 3 || is_digit(argv) != 1)
print_error();

while (str1[len1])
len1++;
while (str2[len2])
len2++;

num1 = malloc(len1 * s), num2 = malloc(len2 * s), product = _calloc(len1 + len2 + 1, s);
(num1 == NULL || num2 == NULL || product == NULL) ? print_error() : 0;

for (i = len1 - 1, j = 0; i >= 0; i--, j++)
num1[j] = str1[i] - '0';
for (i = len2 - 1, j = 0; i >= 0; i--, j++)
num2[j] = str2[i] - '0';

for (i = 0; i < len2; i++)
for (j = 0; j < len1; j++)
product[i + j] += num2[i] * num1[j];

for (i = 0; i < len1 + len2; i++)
{
carry = product[i] / 10, product[i] %= 10, product[i + 1] += carry;
}

for (i = len1 + len2; i >= 0; i--)
	(product[i] > 0) ? break : 0;
if (i == -1)
printf("0\n");
else
{
for (; i >= 0; i--)
printf("%d", product[i]);
printf("\n");
}

free(num1), free(num2), free(product);
return (0);
}
