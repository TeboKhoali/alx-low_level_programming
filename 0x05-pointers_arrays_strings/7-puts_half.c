#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int k = 0;
	int h;

	while (str[k] != '\0')
	{
	k++;
	}
	if (k % 2 == 1)
	{
	h = (k - 1) / 2;
	h += 1;
	}
	else
	{
	h = k / 2;
	}

	for (; h < k; h++)
	{
	_putchar(str[h]);
	}
	_putchar('\n');
}
