#include"main.h"

/**
 * print_last_digit - printing the last digit of a number
 * @k: the special number
 * Return: Value of the last digit
 */

int print_last_digit(int k)

{

	int last;

	last = k % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
