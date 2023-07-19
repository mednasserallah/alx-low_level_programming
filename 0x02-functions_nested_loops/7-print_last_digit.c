#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 *
 * @n: Type int and @x type int
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int n;

	if (y < 0)
	{
		x = -1 * (n % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}
}
