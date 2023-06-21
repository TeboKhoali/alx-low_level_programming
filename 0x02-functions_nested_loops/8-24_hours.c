#include "main.h"

/**
 * jack_bauer - Code that will print every minute of Jack bauer's day
 * Return: ...
 */

void jack_bauer(void)

{

	int c, n, k, i;

	for (c = 0; c <= 2; c++)
	{
	for (n = 0; n <= 9; n++)
	{
	if ((c <= 1 && n <= 9) || (c <= 2 && n <= 3))
	{
	for (k = 0; k <= 5; k++)
	{
	for (i = 0; i <= 9; i++)
	{
	_putchar(c + '0');
	_putchar(n + '0');
	_putchar(58);
	_putchar(k + '0');
	_putchar(i + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
