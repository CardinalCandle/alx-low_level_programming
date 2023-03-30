#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int carry = 0;
    int len1 = strlen(n1), len2 = strlen(n2);
    int len = len1 > len2 ? len1 : len2;

    if (len + 1 > size_r) return 0;

    r[len+1] = '\0';
    while (len--) {
        int digit1 = len1 > 0 ? n1[--len1] - '0' : 0;
        int digit2 = len2 > 0 ? n2[--len2] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }

        r[len+1] = sum + '0';
    }

    if (carry) {
        r[0] = '1';
        return r;
    } else {
        return r+1;
    }
}

