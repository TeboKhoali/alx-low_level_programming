#include "main.h"

/**
 * print_sign - printing the signs of the numbers
 * @c: our number that will be checked
 * Return: 1 for +. -1 for - , 0 for 0
 */

int print_sign(int c)

{

	if (c > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (c < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
