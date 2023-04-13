#include "main.h"

int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

int errors(void)
{
	printf("Error\n");
	return (98);
}

int main(int argc, char *argv[])
{
	int i, len, len1, len2, *result;
	int j, digit1, digit2, carry, start;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		return (errors());
	len1 = 0;
	len2 = 0;
	while (argv[1][len1])
		len1++;
	while (argv[2][len2])
		len2++;

	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = argv[1][i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = argv[2][j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i] += carry;
	}

	start = 0;
	while (start < len - 1 && result[start] == 0)
		start++;

	if (start == len - 1)
		putchar('0');
	else
	{
		for (i = start; i < len; i++)
			putchar(result[i] + '0');
	}
	putchar('\n');
	free(result);
	return (0);
}
