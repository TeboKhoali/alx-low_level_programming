#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: The string to be treated
 * Return: void
 */

void puts2(char *str)

{
	int k;
	int h = 0;

	while (str[h] != '\0')
	{
	h++;
	}
	for (k = 0; k < h; k += 2)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
